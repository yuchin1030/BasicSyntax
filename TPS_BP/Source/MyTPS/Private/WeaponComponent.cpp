// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"
#include "EnhancedInputComponent.h"
#include "TPSPlayer.h"
#include "WeaponActor.h"
#include "Camera/CameraComponent.h"
#include "BulletFXActor.h"
#include "Enemy.h"
#include "PlayerAnimInstance.h"
#include "KismetTraceUtils.h"
#include "TPSFunctionLibrary.h"
#include "GrenadeActor.h"
#include "BombDecalActor.h"
#include "GameFramework/SpringArmComponent.h"
#include "TPSMainGameModeBase.h"
#include "MainWidget.h"
#include "EngineUtils.h"


UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	player = GetOwner<ATPSPlayer>();
	gm = Cast<ATPSMainGameModeBase>(GetWorld()->GetAuthGameMode());

	// ���忡 �ִ� �Ѿ� �ǰ� ȿ�� ���͸� ã�Ƽ� ������ ������Ų��.
	for (TActorIterator<ABulletFXActor> iter(GetWorld()); iter; ++iter)
	{
		bulletFX = *iter;
	}

	// ���� ���� ǥ�� ��Į ���� �����ϱ�
	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	bombDecal_inst = GetWorld()->SpawnActor<ABombDecalActor>(bombDecal_bp, player->GetActorLocation(), FRotator::ZeroRotator, params);
	if (bombDecal_inst != nullptr)
	{
		bombDecal_inst->SetShowDecal(false);
	}
}


void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ī�޶� �� �� �ƿ� ó��
	float direction = bZoomIn ? 1.0f : -1.0f;
	alpha += DeltaTime * direction * 5.0f;
	alpha = FMath::Clamp(alpha, 0.0f, 1.0f);

	float result = FMath::Lerp(90, 40, alpha);
	player->cameraComp->SetFieldOfView(result);

	// ����ź�� ������ �׸���.
	if (bShowLine)
	{
		throwDir = player->GetActorForwardVector() + player->GetActorUpVector();
		FVector modifiedDir = player->cameraComp->GetComponentTransform().TransformVector(throwDir);
		
#pragma region UGameplayStatics Style
		// 1. UGameplayStatics Ŭ������ �Լ��� �̿��� ���

		//FPredictProjectilePathParams params;
		//params.StartLocation = GetActorLocation() + GetActorForwardVector() * 100;
		//params.LaunchVelocity = modifiedDir * throwPower;
		//params.bTraceWithChannel = true;
		//params.TraceChannel = ECC_Visibility;
		//params.DrawDebugTime = 0;
		//params.DrawDebugType = EDrawDebugTrace::Type::ForOneFrame;
		//params.MaxSimTime = 3.0f;
		//params.SimFrequency = 50;
		//params.OverrideGravityZ = -980;

		//FPredictProjectilePathResult pathResults;
		//UGameplayStatics::PredictProjectilePath(GetWorld(), params, pathResults);

		//for (int32 i = 0; i < pathResults.PathData.Num() - 1; i++)
		//{
		//	DrawDebugLine(GetWorld(), pathResults.PathData[i].Location, pathResults.PathData[i + 1].Location, FColor::Red, false, 0, 0, 3);
		//}
#pragma endregion

		// 2. ���� ����ϴ� ���
		TArray<FVector> results = UTPSFunctionLibrary::CalculateThrowPoints(player, modifiedDir, throwPower, 0.1f, 3.0f, GetWorld()->GetDefaultGravityZ());

		FVector finalLoc;

		for (int32 i = 0; i < results.Num() - 1; i++)
		{
			FHitResult hitInfo;

			if (GetWorld()->LineTraceSingleByChannel(hitInfo, results[i], results[i + 1], ECC_Visibility))
			{
				DrawDebugLine(GetWorld(), results[i], hitInfo.ImpactPoint, FColor::Black, false, 0, 0, 3);
				finalLoc = hitInfo.ImpactPoint;
				break;
			}
			else
			{
				finalLoc = results[i + 1];
				DrawDebugLine(GetWorld(), results[i], results[i + 1], FColor::Black, false, 0, 0, 3);
			}
		}

		if (bombDecal_inst != nullptr)
		{
			bombDecal_inst->SetActorLocation(finalLoc);
			bombDecal_inst->SetShowDecal(true);
		}
	}
	else
	{
		bombDecal_inst->SetShowDecal(false);
	}
}

void UWeaponComponent::SetupPlayerInputComponent(UEnhancedInputComponent* enhancedInputComponent)
{
	enhancedInputComponent->BindAction(ia_fire, ETriggerEvent::Started, this, &UWeaponComponent::PlayerFire);
	enhancedInputComponent->BindAction(ia_alpha1, ETriggerEvent::Started, this, &UWeaponComponent::SetWeapon1);
	enhancedInputComponent->BindAction(ia_alpha2, ETriggerEvent::Started, this, &UWeaponComponent::SetWeapon2);
	enhancedInputComponent->BindAction(ia_aimFocusing, ETriggerEvent::Started, this, &UWeaponComponent::SniperGunZoomInOut);
	enhancedInputComponent->BindAction(ia_aimFocusing, ETriggerEvent::Completed, this, &UWeaponComponent::SniperGunZoomInOut);
	enhancedInputComponent->BindAction(ia_releaseWeapon, ETriggerEvent::Started, this, &UWeaponComponent::ReleaseAction);
}

void UWeaponComponent::PlayerFire(const FInputActionValue& value)
{
	if (player->inputType == EInputType::TPS_INPUT)
	{

		// ���� ��� ���� �ʰų� �Ǵ� ���� �߻��ϴ� �ִϸ��̼� ���� ������ �� �Լ��� �����Ѵ�.
		if (player->attachedWeapon == nullptr || GetWorld()->GetTimerManager().IsTimerActive(endFireTimer))
		{
			UE_LOG(LogTemp, Warning, TEXT("Weapon: %s"), player->attachedWeapon == nullptr ? *FString("Null") : *FString("Has"));
			return;
		}

		// ���� Ʈ���̽� ���
		FHitResult hitInfo;
		FVector startLoc = player->cameraComp->GetComponentLocation();
		FVector endLoc = startLoc + player->cameraComp->GetForwardVector() * player->attachedWeapon->weaponData.fireDistance;
		// �浹 üũ�� ������ ������Ʈ Ÿ��
		FCollisionObjectQueryParams objQueryParams;
		objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
		objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		// �浹 üũ���� ������ ���� �Ǵ� ������Ʈ
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(player);

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

			// ������ ������ ���� ȿ�� ����Ʈ�� ����Ѵ�.
			if (bulletFX != nullptr)
			{
				bulletFX->SetActorLocation(hitInfo.ImpactPoint);
				bulletFX->PlayFX();
			}

			// ����, ������ ����� Enemy���...
			AEnemy* enemy = Cast<AEnemy>(hitInfo.GetActor());

			if (enemy != nullptr)
			{
				// Enemy�� OnDamage() �Լ��� �����Ų��.
				enemy->OnDamaged(player->attachedWeapon->weaponData.damage, player);

			}
		}
		//else
		//{
			//DrawDebugLine(GetWorld(), startLoc, endLoc, FColor(255, 0, 0), false, 2.0f, 0, 1.0f);
		//}

		if (player->GetPlayerAnim() != nullptr)
		{
			player->GetPlayerAnim()->bFire = true;

			GetWorld()->GetTimerManager().SetTimer(endFireTimer, this, &UWeaponComponent::EndFire, 0.5f, false);
		}

		if (fire_montages.Num() > 1)
		{
			if (player->attachedWeapon->weaponData.bSniperGun)
			{
				player->PlayAnimMontage(fire_montages[1]);
			}
			else
			{
				player->PlayAnimMontage(fire_montages[0]);
			}
		}
	}
}

void UWeaponComponent::PlayerFire2(const FInputActionValue& value)
{
	FHitResult hitInfo;
	FVector startLoc = player->GetActorLocation();
	FVector endLoc = startLoc + player->GetActorForwardVector() * 1000.0f;
	FQuat startRot = FRotator(0, 0, 45).Quaternion();
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(player);

	// ������ü�� 45�� ȸ����Ų ���·� �߻��Ѵ�.
	bool bResult = GetWorld()->SweepSingleByChannel(hitInfo, startLoc, endLoc, startRot, ECC_Visibility, FCollisionShape::MakeBox(FVector(10)), queryParams);

	if (bResult)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Actor name: %s"), *hitInfo.GetActor()->GetActorNameOrLabel());
		FVector centerPos = (startLoc + endLoc) * 0.5f;
	}

	DrawDebugBoxTraceSingle(GetWorld(), startLoc, endLoc, FVector(10), FRotator(0, 0, 45), EDrawDebugTrace::ForDuration, true, hitInfo, FLinearColor::Green, FLinearColor::Red, 2.0f);
}

void UWeaponComponent::SetWeapon1(const FInputActionValue& value)
{
	currentWeaponNumber = 0;
	ChangeGunType(currentWeaponNumber);
}

void UWeaponComponent::SetWeapon2(const FInputActionValue& value)
{
	currentWeaponNumber = 1;
	ChangeGunType(currentWeaponNumber);
}

void UWeaponComponent::SniperGunZoomInOut(const FInputActionValue& value)
{
	if (player->inputType != EInputType::TPS_INPUT)
	{
		return;
	}

	bool inputValue = value.Get<bool>();

	// ��� ���� ��
	if (currentWeaponNumber == 0)
	{
		bShowLine = inputValue;

		if (!inputValue)
		{
			// ����ź�� ���� �� �߻��Ѵ�.
			FActorSpawnParameters params;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AGrenadeActor* bomb = GetWorld()->SpawnActor<AGrenadeActor>(grenade_bp, player->GetActorLocation() + player->GetActorForwardVector() * 100, FRotator::ZeroRotator, params);

			FVector modifiedDir = player->cameraComp->GetComponentTransform().TransformVector(throwDir);
			bomb->Throw(modifiedDir, throwPower);
		}
	}
	// �������� ���� ��
	else if (currentWeaponNumber == 1)
	{
		if (inputValue)
		{
			player->springArmComp->TargetArmLength = -100;
		}
		else
		{
			player->springArmComp->TargetArmLength = 300;
		}

		// zoom in ȿ�� on/off ����
		bZoomIn = inputValue;

		if (gm != nullptr && gm->mainWidget_inst != nullptr)
		{
			gm->mainWidget_inst->SetSniperMode(!inputValue);
		}
	}
}

void UWeaponComponent::ReleaseAction(const FInputActionValue& value)
{
	if (player->attachedWeapon == nullptr)
	{
		return;
	}
	player->attachedWeapon->Release();
	player->attachedWeapon = nullptr;
	currentWeaponNumber = 0;
}

void UWeaponComponent::EndFire()
{
	if (player->GetPlayerAnim() != nullptr)
	{
		player->GetPlayerAnim()->bFire = false;
	}
}

void UWeaponComponent::ChangeGunType(int32 number)
{
	// �޽� ����
	player->gunMeshComp->SetStaticMesh(player->gunTypes[number]);
	player->gunMeshComp->SetRelativeLocation(player->gunOffset[number]);

	// UI �ؽ��� ����
	if (gm != nullptr)
	{
		gm->mainWidget_inst->SetWeaponTexture(number);
	}
}

void UWeaponComponent::SetCurrentWeaponNumber(bool bSniper)
{
	currentWeaponNumber = (int32)bSniper;
}