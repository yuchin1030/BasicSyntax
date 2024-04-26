// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "TPSPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	player = Cast<ATPSPlayer>(GetOwningActor());
	
	if (player != nullptr)
	{
		playerMovementComp = player->GetCharacterMovement();
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (playerMovementComp != nullptr)
	{
		// ĳ���� �����Ʈ ������Ʈ�� isFalling() �Լ� ��ȯ ���� bIsJump ������ �����Ѵ�.
		bIsJump = playerMovementComp->IsFalling();
	}
}
