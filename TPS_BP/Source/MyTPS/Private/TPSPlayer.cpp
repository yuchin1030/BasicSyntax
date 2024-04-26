// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TPSMainGameModeBase.h"
#include "MainWidget.h"
#include "PlayerAnimInstance.h"
#include "Enemy.h"
#include "EnemyHealthWidget.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MoveComponent.h"
#include "WeaponComponent.h"
#include "FSMComponent.h"
#include "TPSGameInstance.h"


ATPSPlayer::ATPSPlayer()
{
	PrimaryActorTick.bCanEverTick = false;

	// ���̷�Ż �޽� ���� �Ҵ��ϱ�
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> playerMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin'"));
	if (playerMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(playerMesh.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Spring Arm"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0, 50, 60));
	springArmComp->TargetArmLength = 300;
	springArmComp->SocketOffset = FVector(0, 0, 0);
	// ������ ���� target -> socket ������ ��ֹ� �˻�
	springArmComp->bDoCollisionTest = true;
	springArmComp->ProbeSize = 12.0f;
	springArmComp->ProbeChannel = ECC_Camera;
	// ������ ���� �̵��� ������Ű�� ȿ���� �ѱ�
	springArmComp->bEnableCameraLag = true;
	springArmComp->CameraLagSpeed = 50.0f;
	springArmComp->bUsePawnControlRotation = true;
	springArmComp->bInheritYaw = true;
	springArmComp->bInheritPitch = true;
	springArmComp->bInheritRoll = false;

	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	//cameraComp->SetupAttachment(GetCapsuleComponent());
	//cameraComp->SetupAttachment(RootComponent);
	//cameraComp->SetRelativeLocation(FVector(-500, 0, 60));
	cameraComp->SetupAttachment(springArmComp, USpringArmComponent::SocketName);
	// ī�޶��� ȸ�� ���� ��Ʈ�� �����̼ǿ� ������ �ϱ�
	cameraComp->bUsePawnControlRotation = false;

	gunMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh"));
	gunMeshComp->SetupAttachment(GetMesh(), FName("GunSocket"));

	floatingWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Floating Widget Component"));
	floatingWidgetComp->SetupAttachment(GetMesh());
	floatingWidgetComp->SetRelativeLocation(FVector(0, 0, 200));
	floatingWidgetComp->SetWidgetSpace(EWidgetSpace::Screen);
	floatingWidgetComp->SetDrawSize(FVector2D(150, 100));

	static ConstructorHelpers::FClassFinder<UEnemyHealthWidget> playerHPWidget(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/WBP_PlayerHealthWidget.WBP_PlayerHealthWidget_C'"));
	if (playerHPWidget.Succeeded())
	{
		floatingWidgetComp->SetWidgetClass(playerHPWidget.Class);
	}


	// ĳ������ �ִ� �̵� �ӷ°� ���ӷ��� �����Ѵ�.(cm/s)
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxAcceleration = 2048.0f;
	// ĳ������ ���� �����°� ���ӷ��� �����Ѵ�.
	GetCharacterMovement()->GroundFriction = 8.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2048.0f;

	// ��Ʈ�ѷ��� �Է� ���� ĳ������ ȸ�� ���� �����ϱ� ���� ����
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// �̵��ϴ� �������� ĳ���͸� ȸ����Ű��
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// ������ ����
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.05f;

	

	// 0�� �÷��̾�(���� �÷��̾�)�� ����Ѵ�.
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// ����� ���� ������Ʈ��
	moveComp = CreateDefaultSubobject<UMoveComponent>(TEXT("Move Component"));
	weaponComp = CreateDefaultSubobject<UWeaponComponent>(TEXT("Weapon Component"));
}

void ATPSPlayer::BeginPlay()
{
	Super::BeginPlay();

	//APlayerController* pc = GetWorld()->GetFirstPlayerController();
	pc = GetController<APlayerController>();
	if (pc != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());

		if (subsys != nullptr)
		{
			subsys->AddMappingContext(imc_tpsKeyMap, 0);
		}
	}

	gm = Cast<ATPSMainGameModeBase>(GetWorld()->GetAuthGameMode());
	playerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());

	currentHP = playerStatus.maxHP;
	playerHealthWidget = Cast<UEnemyHealthWidget>(floatingWidgetComp->GetWidget());

	tpsPlayerState = EPlayerState::PLAYING;

	// ���� ���� ���� �� ����
	JumpMaxCount = playerStatus.jumpCount;

	// �⺻ �̵� �ӵ� ����
	GetCharacterMovement()->MaxWalkSpeed = playerStatus.baseSpeed;

	// ���� �ν��Ͻ� ��������
	UTPSGameInstance* gi = GetGameInstance<UTPSGameInstance>();
	
	// ���̺��� ��� �� �̸�(Row Name)�� �о����
	TArray<FName> rowNameList = gi->dt_playerStatus->GetRowNames();
	for (int32 i = 0; i < rowNameList.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d: %s"), i, *rowNameList[i].ToString());
	}

	// ���̺� �����͸� ��(Row) ������ �б�
	FPlayerStatus readData = gi->GetPlayerTableData("HeavyMan");
	UE_LOG(LogTemp, Warning, TEXT("Base Speed: %f, DashSpeed: %f, Max Jump Count: %d, Max HP: %d"), readData.baseSpeed, readData.dashSpeed, readData.jumpCount, readData.maxHP);
}

void ATPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ī�޶�� ĳ���� ������ ���ع��� �˻��ϴ� �Լ�
	//CheckObstacles();
}

void ATPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (enhancedInputComponent != nullptr)
	{
		moveComp->SetupPlayerInputComponent(enhancedInputComponent);
		weaponComp->SetupPlayerInputComponent(enhancedInputComponent);
	}
}

void ATPSPlayer::SetGunAnimType(bool sniper)
{
	if (playerAnim != nullptr)
	{
		playerAnim->bUseSniper = sniper;
	}
}

void ATPSPlayer::OnDamaged(int32 dmg, AEnemy* attacker)
{
	currentHP = FMath::Clamp(currentHP - dmg, 0, playerStatus.maxHP);

	if (playerHealthWidget != nullptr)
	{
		playerHealthWidget->SetHealthBar((float)currentHP / (float)playerStatus.maxHP, FLinearColor(1.0f, 0.138f, 0.059f, 1.0f));
	}

	if (currentHP <= 0)
	{
		// �ڽ��� ���¸� ���� ���·� ��ȯ�Ѵ�.
		tpsPlayerState = EPlayerState::DEATH;
		playerAnim->bDead = true;
		GetCharacterMovement()->DisableMovement();

		attacker->fsmComp->RemoveTarget();
		attacker->fsmComp->enemyState = EEnemyState::RETURN;

		// ���̵� �� ȿ���� �ش�.
		if (pc != nullptr)
		{
			pc->PlayerCameraManager->StartCameraFade(0, 1, 3.0f, FLinearColor::Black);

			FTimerHandle restartHandle;
			GetWorldTimerManager().SetTimer(restartHandle, FTimerDelegate::CreateLambda([&]() {
				// ���� ��ġ���� �ٽ� �����Ѵ�.
				Cast<ATPSMainGameModeBase>(GetWorld()->GetAuthGameMode())->RespawnPlayer(pc, this);
				}), 3.0f, false);
		}

	}

	// ī�޶� ���� ȿ���� �ش�.
	if (pc != nullptr)
	{
		pc->ClientStopCameraShake(playerHitShake_bp);
		pc->ClientStartCameraShake(playerHitShake_bp);
	}

	// ��Ʈ UI�� ǥ���Ѵ�.
	/*gm->mainWidget_inst->ShowHitBorder(true);

	FTimerHandle hitBorderHandler;

	GetWorldTimerManager().SetTimer(hitBorderHandler, FTimerDelegate::CreateLambda([&]() {
		gm->mainWidget_inst->ShowHitBorder(false);
		}), 0.4f, false);*/
	gm->mainWidget_inst->PlayHitAnimation();

	int32 number = FMath::RandRange(1, 4);
	//FString sectionName = FString("hit") + FString::FromInt(number);
	FString sectionName = FString::Printf(TEXT("hit%d"), number);

	PlayAnimMontage(hitMotage, 1.0f, FName(sectionName));
}




void ATPSPlayer::CheckObstacles()
{
	// �÷��̾�->ī�޶� �������� ���� Ʈ���̽��� �̿��ؼ� Visibility ä���� �˻��Ѵ�.
	FHitResult hitInfo;
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(this);
	FVector relativeCamPos = GetTransform().TransformVector(camPosition);
	bool bSensored = GetWorld()->LineTraceSingleByChannel(hitInfo, GetActorLocation(), GetActorLocation() + relativeCamPos, ECC_Visibility, queryParams);

	// ����, �˻�� ���� �ִٸ�...
	if (bSensored)
	{
		// �浹�� �������� 10cm ���ʿ� ī�޶� ��ġ��Ų��.
		FVector camLocation = hitInfo.ImpactPoint + hitInfo.ImpactNormal * 10;
		FVector lerpLocation = FMath::Lerp(cameraComp->GetComponentLocation(), camLocation, GetWorld()->GetDeltaSeconds() * 5);

		cameraComp->SetWorldLocation(lerpLocation);
	}
	// �׷��� �ʴٸ�...
	else
	{
		// ī�޶� ���� ��ġ�� ��ġ��Ų��.
		//cameraComp->SetRelativeLocation(camPosition);

		// ī�޶� ���� ȿ��
		SetCameraLag(GetWorld()->GetDeltaSeconds(), 5.0f);
	}
}

void ATPSPlayer::SetCameraLag(float deltaTime, float traceSpeed)
{
	// Lerp�� �̿��ؼ� ī�޶��� ��ġ�� ���� �̵���Ų��.
	FVector targetLoc = GetActorLocation() + GetTransform().TransformVector(camPosition);
	FVector lerpLoc = FMath::Lerp(previousCamLoc, targetLoc, deltaTime * traceSpeed);
	cameraComp->SetWorldLocation(lerpLoc);

	// ���� �������� ī�޶� ��ġ�� ������ �����Ų��.
	previousCamLoc = cameraComp->GetComponentLocation();
}





