// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "TPSPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyAnimInstance.h"
#include "Components/WidgetComponent.h"
#include "Camera/CameraComponent.h"
#include "EnemyHealthWidget.h"
#include "NavigationInvokerComponent.h"
#include "GrenadeActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "FSMComponent.h"
#include "EngineUtils.h"


AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCollisionProfileName(FName("EnemyPreset"));
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	floatingWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Floating Widget Component"));
	floatingWidgetComp->SetupAttachment(GetMesh());
	floatingWidgetComp->SetRelativeLocation(FVector(0, 0, 210));
	floatingWidgetComp->SetRelativeRotation(FRotator(0, 90, 0));
	floatingWidgetComp->SetWidgetSpace(EWidgetSpace::World);
	floatingWidgetComp->SetDrawSize(FVector2D(150, 100));

	// ���� ������Ʈ��
	navInvokerComp = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("NavInvoker Component"));
	fsmComp = CreateDefaultSubobject<UFSMComponent>(TEXT("FSM Component"));

	// AI Controller�� �ڵ� Possess ��� ������ ���忡 ��ġ�Ǿ��� �� �Ǵ� ���� ���� �� �����ϴ� ������ �����Ѵ�.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	// ���忡 �ִ� �÷��̾ ã�´�.
	for (TActorIterator<ATPSPlayer> findActor(GetWorld()); findActor; ++findActor)
	{
		player = *findActor;
	}

	// �÷����� Idle �ִϸ��̼� ��ȣ�� �����ؼ� EnemyAnimInstance�� idleNumber ������ �����Ѵ�.
	anim = Cast<UEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	// ü�� ������ �ʱ�ȭ�Ѵ�.
	currentHP = maxHP;

	// �޽��� ��Ƽ������ DynamicMaterial�� �������ش�.
	UMaterialInterface* currentMat = GetMesh()->GetMaterial(0);
	dynamicMat = UMaterialInstanceDynamic::Create(currentMat, nullptr);
	GetMesh()->SetMaterial(0, dynamicMat);

	// ���� ������Ʈ�� �Ҵ�Ǿ� �ִ� ���� �ν��Ͻ��� �����´�.
	healthWidget = Cast<UEnemyHealthWidget>(floatingWidgetComp->GetWidget());
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ���� ������
	floatingWidgetComp->SetWorldRotation(BillboardWidgetComponent(player));
}

void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnDamaged(int32 dmg, AActor* attacker)
{
	if (fsmComp->enemyState == EEnemyState::DAMAGED)
	{
		return;
	}
	
	// ���� ü�� ����
	currentHP = FMath::Clamp(currentHP - dmg, 0, maxHP);
	if (healthWidget != nullptr)
	{
		healthWidget->SetHealthBar((float)currentHP / (float)maxHP, FLinearColor(1.0f, 0.138f, 0.059f, 1.0f));
	}

	// ������ ��� ��� ���� ü���� 0���� ũ�ٸ�....
	if (currentHP > 0)
	{
		// �ǰ� ���·� ��ȯ�Ѵ�.
		fsmComp->enemyState = EEnemyState::DAMAGED;
		fsmComp->SetNewTarget(attacker);
		hitLocation = GetActorLocation();
		hitDirection = GetActorLocation() - attacker->GetActorLocation();
		hitDirection.Z = 0;
		hitDirection.Normalize();
		fsmComp->targetLoc = hitLocation + hitDirection * 50.0f;

		// ��Ƽ���� ���� ���� ���� ������.
		dynamicMat->SetVectorParameterValue(FName("hitColor"), FVector4(1, 0, 0, 1));
	}
	// �׷��� ������...
	else
	{
		// ���� ���·� ��ȯ�Ѵ�.
		fsmComp->enemyState = EEnemyState::DIE;
		Die();
	}
}

void AEnemy::Die()
{
	// �ݸ����� NoCollision ���·� ��ȯ�Ѵ�.
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// CharacterMovementComponent�� ��Ȱ��ȭ�Ѵ�.
	GetCharacterMovement()->DisableMovement();

	// ���� �ִϸ��̼� ��Ÿ�긦 �����Ѵ�.
	// 1~3 ������ ������ ���ڸ� �ϳ� �̴´�.
	int32 num = FMath::RandRange(1, 3);
	// "Dead" + ���ڷ� ��Ÿ���� ���� �̸��� �����.
	FString sectionName = FString("Dead") + FString::FromInt(num);
	// ���� �̸��� �̿��ؼ� ��Ÿ�ָ� �÷����Ѵ�.
	PlayAnimMontage(death_montage, 1, FName(sectionName));

	// 3�� �ڿ� �����Ѵ�.
	/*FTimerHandle deadHandler;

	GetWorldTimerManager().SetTimer(deadHandler, FTimerDelegate::CreateLambda([&]() {
		Destroy();
		}), 5.6f, false);*/
}

// ī�޶� ������Ʈ�� ������ �ִ� ���͸� ���� ������Ʈ�� �ٶ󺸵��� ȸ�� ���� ������ִ� �Լ�
FRotator AEnemy::BillboardWidgetComponent(class AActor* camActor)
{
	ATPSPlayer* camTarget = Cast<ATPSPlayer>(camActor);
	if (camTarget != nullptr)
	{
		FVector lookDir = (camTarget->cameraComp->GetComponentLocation() - floatingWidgetComp->GetComponentLocation()).GetSafeNormal();
		FRotator lookRot = UKismetMathLibrary::MakeRotFromX(lookDir);
		//FRotator lookRot = lookDir.ToOrientationRotator();

		return lookRot;
	}
	else
	{
		return FRotator::ZeroRotator;
	}
}

void AEnemy::HitBomb(int32 dmg, const FVector& attackDir, float maxRadius, float upPower)
{
	// 1. �������� �����Ų��.
	currentHP = FMath::Clamp(currentHP - dmg, 0, maxHP);
	healthWidget->SetHealthBar((float)currentHP / (float)maxHP, FLinearColor(1.0f, 0.138f, 0.059f, 1.0f));

	if (currentHP > 0)
	{
		fsmComp->enemyState = EEnemyState::DAMAGED_BOMB;
	}
	else
	{
		fsmComp->enemyState = EEnemyState::DIE;
	}

	// 2. ���� ������ ���ش�.
	//GetMesh()->SetCollisionProfileName(FName("Ragdoll"));
	//GetMesh()->SetSimulatePhysics(true);

	// 3. ������ �߽����κ��� �ٱ��� �������� ����������.
	GetCapsuleComponent()->SetSimulatePhysics(true);
	bombDir = attackDir;
	bombDist = maxRadius;
	bombUpPower = upPower;

	GetWorldTimerManager().SetTimerForNextTick(this, &AEnemy::BombImpact);
}

void AEnemy::BombImpact()
{
	float power = (bombDist - bombDir.Length()) * 500.0f;
	bombDir.Normalize();
	bombDir.Z = bombUpPower;

	GetCapsuleComponent()->AddImpulse(bombDir * power);
}

