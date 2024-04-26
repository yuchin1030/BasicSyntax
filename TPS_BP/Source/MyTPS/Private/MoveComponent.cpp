// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"
#include "TPSPlayer.h"
#include "Camera/CameraComponent.h"
#include "PlayerAnimInstance.h"
#include "EnhancedInputComponent.h"
#include "EngineUtils.h"
#include "GameFramework/CharacterMovementComponent.h"

UMoveComponent::UMoveComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	// �θ��� �÷��̾� Ŭ������ ĳ���Ѵ�.
	player = GetOwner<ATPSPlayer>();

	pc = player->GetController<APlayerController>();
	if (pc != nullptr)
	{
		pc->SetShowMouseCursor(player->inputType == EInputType::RTS_INPUT);
	}

	for (TActorIterator<AActor> iter(GetWorld()); iter; ++iter)
	{
		AActor* findActor = *iter;

		if (findActor->GetActorNameOrLabel().Contains("ClickActor"))
		{
			clickActor = findActor;
		}
	}

	targetMoveLocation = player->GetActorLocation();
}


void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (player->inputType == EInputType::RTS_INPUT)
	{
		FVector dir = targetMoveLocation - player->GetActorLocation();
		dir.Z = 0;

		if (dir.Length() > 10)
		{
			player->AddMovementInput(dir.GetSafeNormal());
		}

		if (player->GetPlayerAnim() != nullptr)
		{
			if (player->GetCharacterMovement()->Velocity.Length() > 0.5f)
			{
				player->GetPlayerAnim()->moveDirection = dir.GetSafeNormal();
			}
			else
			{
				player->GetPlayerAnim()->moveDirection = FVector::ZeroVector;
			}
		}
	}

	if (player->inputType == EInputType::MOBILE_INPUT)
	{
		if (pc != nullptr)
		{
			float finger1_x = 0;
			float finger2_x = 0;
			float finger1_y = 0;
			float finger2_y = 0;
			bool bfinger1Touched = false;
			bool bfinger2Touched = false;

			// ���� �հ��� ��ġ ����(Screen)�� �����´�.
			pc->GetInputTouchState(ETouchIndex::Touch1, finger1_x, finger1_y, bfinger1Touched);
			pc->GetInputTouchState(ETouchIndex::Touch2, finger2_x, finger2_y, bfinger2Touched);

			// ���� ��ǥ�� ��ȯ�ϱ�
			/*if (bfinger1Touched)
			{
				FVector finger1WorldPosition;
				FVector finger1WorldDirection;
				pc->DeprojectScreenPositionToWorld(finger1_x, finger1_y, finger1WorldPosition, finger1WorldDirection);
			}*/

			// �ſ� �߿� * 100000000
			// �� ��ǥ ���� ��Ÿ���� �̿��ؼ� �������� �����Ѵ�.
			if (bfinger1Touched && bfinger2Touched)
			{
				// ���� �հ��� �Ÿ�
				float fingerDistance = FVector2D::Distance(FVector2D(finger1_x, finger1_y), FVector2D(finger2_x, finger2_y));
				
				// ù ��ġ���� üũ
				if (prevFingerDist > -1)
				{
					float deltaFingerDist = fingerDistance - prevFingerDist;
					clickActor->SetActorScale3D(FVector(1 + deltaFingerDist));
				}

				// ���� �հ��� �Ÿ��� ����
				prevFingerDist = fingerDistance;
			}
			else
			{
				// ù ��ġ �ʱ�ȭ
				prevFingerDist = -1;
			}
		}
	}
}

void UMoveComponent::SetupPlayerInputComponent(class UEnhancedInputComponent* enhancedInputComponent)
{
	// TPS Type
	enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Triggered, this, &UMoveComponent::PlayerMove);
	enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Completed, this, &UMoveComponent::PlayerMove);
	enhancedInputComponent->BindAction(ia_rotate, ETriggerEvent::Triggered, this, &UMoveComponent::PlayerRotate);
	enhancedInputComponent->BindAction(ia_jump, ETriggerEvent::Started, this, &UMoveComponent::PlayerJump);
	enhancedInputComponent->BindAction(ia_jump, ETriggerEvent::Completed, this, &UMoveComponent::PlayerJumpEnd);

	// RTS Type
	enhancedInputComponent->BindAction(ia_leftClick, ETriggerEvent::Started, this, &UMoveComponent::SelectAction);
	enhancedInputComponent->BindAction(ia_rightClick, ETriggerEvent::Started, this, &UMoveComponent::ClickMoveAction);

}

void UMoveComponent::PlayerMove(const FInputActionValue& value)
{

	FVector2D inputValue = value.Get<FVector2D>();
	moveDirection = FVector(inputValue.Y, inputValue.X, 0);

	// p = p0 + vt
	// v = v0 + at
	//SetActorLocation(GetActorLocation() + moveDirection * 600 * DeltaTime);

	// UCharacterMovementComponent�� �Լ��� �̿��ؼ� �̵��ϴ� ���
	// �Է� ���� ���͸� �ڽ��� ȸ�� �� �������� ��ȯ�Ѵ�.(world -> local)
	//FVector localMoveDirection = GetTransform().TransformVector(moveDirection);
	FVector localMoveDirection = player->cameraComp->GetComponentTransform().TransformVector(moveDirection);

	//FVector forward = FRotationMatrix(GetActorRotation()).GetUnitAxis(EAxis::X);
	//FVector right = FRotationMatrix(GetActorRotation()).GetUnitAxis(EAxis::Y);
	//FVector localMoveDirection = GetActorForwardVector() * moveDirection.X + GetActorRightVector() * moveDirection.Y;
	player->AddMovementInput(localMoveDirection.GetSafeNormal());

	// �ִϸ��̼� �ν��Ͻ��� �ִ� moveDirection ������ ���� �Է� ���� �����Ѵ�.
	if (player->GetPlayerAnim() != nullptr)
	{
		player->GetPlayerAnim()->moveDirection = moveDirection;
	}
}


void UMoveComponent::PlayerRotate(const FInputActionValue& value)
{
	FVector2D inputValue = value.Get<FVector2D>();
	deltaRotation = FRotator(inputValue.Y, inputValue.X, 0);
	//UE_LOG(LogTemp, Warning, TEXT("(%.2f, %.2f)"), inputValue.X, inputValue.Y);

	//SetActorRotation(GetActorRotation() + deltaRotation);
	player->AddControllerYawInput(deltaRotation.Yaw * mouseSensibility);
	player->AddControllerPitchInput(deltaRotation.Pitch * mouseSensibility);
}

void UMoveComponent::PlayerJump(const FInputActionValue& value)
{
	player->Jump();
}

void UMoveComponent::PlayerJumpEnd(const FInputActionValue& value)
{
	player->StopJumping();
}

void UMoveComponent::SelectAction(const FInputActionValue& value)
{
	if (player->inputType != EInputType::RTS_INPUT)
	{
		return;
	}

	if (pc != nullptr)
	{
		// ���콺 Ŀ�� ��ġ ��ǥ(��ũ�� ��ǥ��)�� ���� ��ǥ��� ��ȯ�Ѵ�. -> Deprojction
		FVector mouseLocation;
		FVector mouseDirection;

		bool bTransform = pc->DeprojectMousePositionToWorld(mouseLocation, mouseDirection);

		if (bTransform)
		{
			// ���콺 ��ġ���� ī�޶� ���콺 Ŀ���� �ٶ󺸴� �������� ����Ʈ���̽��� ���� ������ �߻��Ѵ�.
			FHitResult hitInfo;
			FVector startLoc = mouseLocation;
			FVector endLoc = startLoc + mouseDirection * 10000;
			FCollisionQueryParams params;
			params.AddIgnoredActor(player);

			if (GetWorld()->LineTraceSingleByChannel(hitInfo, startLoc, endLoc, ECC_Visibility, params))
			{
				UE_LOG(LogTemp, Warning, TEXT("Selected Object Name: %s"), *hitInfo.GetActor()->GetActorNameOrLabel());

				//hitInfo.GetActor()->Destroy();
			}
		}
	}
}

void UMoveComponent::ClickMoveAction(const FInputActionValue& value)
{

	if (player->inputType != EInputType::RTS_INPUT)
	{
		return;
	}

	if (pc != nullptr)
	{
		// ���콺 Ŀ�� ��ġ ��ǥ(��ũ�� ��ǥ��)�� ���� ��ǥ��� ��ȯ�Ѵ�. -> Deprojction
		FVector mouseLocation;
		FVector mouseDirection;

		bool bTransform = pc->DeprojectMousePositionToWorld(mouseLocation, mouseDirection);

		if (bTransform)
		{
			// ���콺 ��ġ���� ī�޶� ���콺 Ŀ���� �ٶ󺸴� �������� ����Ʈ���̽��� ���� ������ �߻��Ѵ�.
			FHitResult hitInfo;
			FVector startLoc = mouseLocation;
			FVector endLoc = startLoc + mouseDirection * 10000;
			FCollisionQueryParams params;
			params.AddIgnoredActor(player);

			if (GetWorld()->LineTraceSingleByChannel(hitInfo, startLoc, endLoc, ECC_Visibility, params))
			{
				// clickActor ������Ʈ�� ���� Ʈ���̽��� �浹�� �������� �ű��.
				if (clickActor != nullptr)
				{
					clickActor->SetActorLocation(hitInfo.ImpactPoint);
				}
				targetMoveLocation = hitInfo.ImpactPoint;

				
			}
		}
	}
}
