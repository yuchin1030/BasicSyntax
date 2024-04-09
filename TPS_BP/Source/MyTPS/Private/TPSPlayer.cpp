// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "KismetTraceUtils.h"
#include "Components/StaticMeshComponent.h"
#include "BulletFXActor.h"
#include "EngineUtils.h"
#include "TPSMainGameModeBase.h"
#include "MainWidget.h"
#include "WeaponActor.h"
#include "PlayerAnimInstance.h"


ATPSPlayer::ATPSPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

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

	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	//cameraComp->SetupAttachment(GetCapsuleComponent());
	//cameraComp->SetupAttachment(RootComponent);
	//cameraComp->SetRelativeLocation(FVector(-500, 0, 60));
	cameraComp->SetupAttachment(springArmComp, USpringArmComponent::SocketName);
	// ī�޶��� ȸ�� ���� ��Ʈ�� �����̼ǿ� ������ �ϱ�
	cameraComp->bUsePawnControlRotation = false;

	gunMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh"));
	gunMeshComp->SetupAttachment(GetMesh(), FName("GunSocket"));


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
	
	// ���� ���� ���� ��
	JumpMaxCount = 2;
}

void ATPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	//APlayerController* pc = GetWorld()->GetFirstPlayerController();
	APlayerController* pc = GetController<APlayerController>();
	if (pc != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());
		
		if (subsys != nullptr)
		{
			subsys->AddMappingContext(imc_tpsKeyMap, 0);
		}
	}
	
	// ���忡 �ִ� �Ѿ� �ǰ� ȿ�� ���͸� ã�Ƽ� ������ ������Ų��.
	for (TActorIterator<ABulletFXActor> iter(GetWorld()); iter; ++iter)
	{
		bulletFX = *iter;
	}

	gm = Cast<ATPSMainGameModeBase>(GetWorld()->GetAuthGameMode());
	playerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
}

void ATPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ī�޶�� ĳ���� ������ ���ع��� �˻��ϴ� �Լ�
	//CheckObstacles();
	
	// ī�޶� �� �� �ƿ� ó��
	float direction = bZoomIn ? 1.0f : -1.0f;
	alpha += DeltaTime * direction * 5.0f;
	alpha = FMath::Clamp(alpha, 0.0f, 1.0f);

	float result = FMath::Lerp(90, 40, alpha);
	cameraComp->SetFieldOfView(result);

}

void ATPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (enhancedInputComponent != nullptr)
	{
		//enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Started, this, &ATPSPlayer::PlayerMoveStart);
		enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Triggered, this, &ATPSPlayer::PlayerMove);
		enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Completed, this, &ATPSPlayer::PlayerMove);
		//enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Completed, this, &ATPSPlayer::PlayerMoveEnd);
		enhancedInputComponent->BindAction(ia_rotate, ETriggerEvent::Triggered, this, &ATPSPlayer::PlayerRotate);
		//enhancedInputComponent->BindAction(ia_rotate, ETriggerEvent::Completed, this, &ATPSPlayer::PlayerRotate);
		enhancedInputComponent->BindAction(ia_jump, ETriggerEvent::Started, this, &ATPSPlayer::PlayerJump);
		enhancedInputComponent->BindAction(ia_jump, ETriggerEvent::Completed, this, &ATPSPlayer::PlayerJumpEnd);
		//enhancedInputComponent->BindAction(ia_jump, ETriggerEvent::Started, this, &ACharacter::Jump);
		enhancedInputComponent->BindAction(ia_fire, ETriggerEvent::Started, this, &ATPSPlayer::PlayerFire);
		enhancedInputComponent->BindAction(ia_alpha1, ETriggerEvent::Started, this, &ATPSPlayer::SetWeapon1);
		enhancedInputComponent->BindAction(ia_alpha2, ETriggerEvent::Started, this, &ATPSPlayer::SetWeapon2);
		enhancedInputComponent->BindAction(ia_aimFocusing, ETriggerEvent::Started, this, &ATPSPlayer::SniperGunZoomInOut);
		enhancedInputComponent->BindAction(ia_aimFocusing, ETriggerEvent::Completed, this, &ATPSPlayer::SniperGunZoomInOut);
		enhancedInputComponent->BindAction(ia_releaseWeapon, ETriggerEvent::Started, this, &ATPSPlayer::ReleaseAction);
	}
}

void ATPSPlayer::SetGunAnimType(bool sniper)
{
	if (playerAnim != nullptr)
	{
		playerAnim->bUseSniper = sniper;
	}
}

void ATPSPlayer::PlayerMove(const FInputActionValue& value)
{
	FVector2D inputValue = value.Get<FVector2D>();
	moveDirection = FVector(inputValue.Y, inputValue.X, 0);

	// p = p0 + vt
	// v = v0 + at
	//SetActorLocation(GetActorLocation() + moveDirection * 600 * DeltaTime);

	// UCharacterMovementComponent�� �Լ��� �̿��ؼ� �̵��ϴ� ���
	// �Է� ���� ���͸� �ڽ��� ȸ�� �� �������� ��ȯ�Ѵ�.(world -> local)
	//FVector localMoveDirection = GetTransform().TransformVector(moveDirection);
	FVector localMoveDirection = cameraComp->GetComponentTransform().TransformVector(moveDirection);

	//FVector forward = FRotationMatrix(GetActorRotation()).GetUnitAxis(EAxis::X);
	//FVector right = FRotationMatrix(GetActorRotation()).GetUnitAxis(EAxis::Y);
	//FVector localMoveDirection = GetActorForwardVector() * moveDirection.X + GetActorRightVector() * moveDirection.Y;
	AddMovementInput(localMoveDirection.GetSafeNormal());

	// �ִϸ��̼� �ν��Ͻ��� �ִ� moveDirection ������ ���� �Է°��� �����Ѵ�.
	if (playerAnim != nullptr)
	{
		playerAnim->moveDirection = moveDirection;
	}
	
}

/*void ATPSPlayer::PlayerMoveStart(const FInputActionValue& value)
{
	// �޸��� �ִϸ��̼����� ��ü�Ѵ�.
	GetMesh()->PlayAnimation(anims[1], true);
}

void ATPSPlayer::PlayerMoveEnd(const FInputActionValue& value)
{
	// ��� �ִϸ��̼����� ��ü�Ѵ�.
	GetMesh()->PlayAnimation(anims[0], true);
}*/

void ATPSPlayer::PlayerRotate(const FInputActionValue& value)
{
	FVector2D inputValue = value.Get<FVector2D>();
	deltaRotation = FRotator(inputValue.Y, inputValue.X, 0);
	//UE_LOG(LogTemp, Warning, TEXT("(%.2f, %.2f)"), inputValue.X, inputValue.Y);

	//SetActorRotation(GetActorRotation() + deltaRotation);
	AddControllerYawInput(deltaRotation.Yaw * mouseSensibility);
	AddControllerPitchInput(deltaRotation.Pitch * mouseSensibility);
}

void ATPSPlayer::PlayerJump(const FInputActionValue& value)
{
	Jump();


}

void ATPSPlayer::PlayerJumpEnd(const FInputActionValue& value)
{
	StopJumping();

	GetCharacterMovement()->IsFalling();

}

void ATPSPlayer::PlayerFire(const FInputActionValue& value)
{
	// ���� ��� ���� �ʰų� �Ǵ� ���� �߻��ϴ� �ִϸ��̼� ���� ������ �� �Լ��� �����Ѵ�. 
	if (attachedWeapon == nullptr || GetWorldTimerManager().IsTimerActive(endFireTimer))
	{
		return;
	}
	
	// ���� Ʈ���̽� ���
	FHitResult hitInfo;
	FVector startLoc = cameraComp->GetComponentLocation();
	FVector endLoc = startLoc + cameraComp->GetForwardVector() * 1000.0f;
	// �浹 üũ�� ������ ������Ʈ Ÿ��
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	// �浹 üũ���� ������ ���� �Ǵ� ������Ʈ
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(this);

	// �̱� ���
	//bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLoc, endLoc, objQueryParams, queryParams);
	bool bResult = GetWorld()->LineTraceSingleByChannel(hitInfo, startLoc, endLoc, ECC_Visibility, queryParams);

	// ��Ƽ ���
	//TArray<FHitResult> hitInfos;

	//bool bResult = GetWorld()->LineTraceMultiByChannel(hitInfos, startLoc, endLoc, ECC_Visibility, queryParams);
	//bool bResult = GetWorld()->LineTraceMultiByObjectType(hitInfos, startLoc, endLoc, objQueryParams, queryParams);

	if (bResult)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit Actor Name: %s"), *hitInfo.GetActor()->GetActorNameOrLabel());
		//DrawDebugLine(GetWorld(), startLoc, hitInfo.ImpactPoint, FColor(0, 255, 0), false, 2.0f, 0, 1);
		//DrawDebugLine(GetWorld(), hitInfo.ImpactPoint, endLoc, FColor(255, 0, 0), false, 2.0f, 0, 1);

		// �浹�� ������ ���� ȿ�� ����Ʈ�� ����Ѵ�.
		if (bulletFX != nullptr)
		{
			bulletFX->SetActorLocation(hitInfo.ImpactPoint);
			bulletFX->PlayFX();
		}
	}
	else
	{
		//DrawDebugLine(GetWorld(), startLoc, endLoc, FColor(255, 0, 0), false, 2.0f, 0, 1.0f);
	}

	if (playerAnim != nullptr)
	{
		playerAnim->bFire = true;

		GetWorldTimerManager().SetTimer(endFireTimer, this, &ATPSPlayer::EndFire, 1.3f, false);
	}

	if (fire_montages.Num() > 1)
	{
		if (attachedWeapon->bSniperGun)
		{
			PlayAnimMontage(fire_montages[1]);
		}
		else
		{
			PlayAnimMontage(fire_montages[0]);

		}
	}
}

void ATPSPlayer::PlayerFire2(const FInputActionValue& value)
{
	FHitResult hitInfo;
	FVector startLoc = GetActorLocation();
	FVector endLoc = startLoc + GetActorForwardVector() * 1000.0f;
	FQuat startRot = FRotator(0, 0, 45).Quaternion();
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(this);

	// ������ü�� 45�� ȸ����Ų ���·� �߻��Ѵ�.
	bool bResult = GetWorld()->SweepSingleByChannel(hitInfo, startLoc, endLoc, startRot, ECC_Visibility, FCollisionShape::MakeBox(FVector(10)), queryParams);

	if (bResult)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Actor name: %s"), *hitInfo.GetActor()->GetActorNameOrLabel());
		FVector centerPos = (startLoc + endLoc) * 0.5f;
	}

	DrawDebugBoxTraceSingle(GetWorld(), startLoc, endLoc, FVector(10), FRotator(0, 0, 45), EDrawDebugTrace::ForDuration, true, hitInfo, FLinearColor::Green, FLinearColor::Red, 2.0f);
}

void ATPSPlayer::SetWeapon1(const FInputActionValue& value)
{
	currentWeaponNumber = 0;
	ChangeGunType(0);
}

void ATPSPlayer::SetWeapon2(const FInputActionValue& value)
{
	currentWeaponNumber = 1;
	ChangeGunType(1);
}

void ATPSPlayer::SniperGunZoomInOut(const FInputActionValue& value)
{
	if (currentWeaponNumber != 1)
	{
		return;	// return ������ �ڵ尡 �� �־ �׳� ��������
	}

	bool inputValue = value.Get<bool>();

	if (inputValue)
	{
		springArmComp->TargetArmLength = -100;
	}
	else
	{
		springArmComp->TargetArmLength = 300;
	}

	// zoom in ȿ�� on/off ����
	bZoomIn = inputValue;

	if (gm != nullptr && gm->mainWidget_inst != nullptr)
	{
		gm->mainWidget_inst->SetSniperMode(!inputValue);
	}
}

void ATPSPlayer::ReleaseAction(const FInputActionValue& value)
{
	if (attachedWeapon == nullptr)
	{
		return;
	}

	attachedWeapon->Release();
	attachedWeapon = nullptr;

}

void ATPSPlayer::EndFire()
{
	if (playerAnim != nullptr)
	{
		playerAnim->bFire = false;
	}
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

void ATPSPlayer::ChangeGunType(int32 number)
{
	// �޽� ����
	gunMeshComp->SetStaticMesh(gunTypes[number]);
	gunMeshComp->SetRelativeLocation(gunOffset[number]);
	
	// UI �ؽ��� ����
	if (gm != nullptr)
	{
		gm->mainWidget_inst->SetWeaponTexture(number);
	}
}

