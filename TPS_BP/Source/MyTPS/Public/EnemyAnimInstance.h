// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FSMComponent.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYTPS_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="MySettings")
	class AEnemy* enemy;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="MySettings")
	EEnemyState currentState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="MySettings")
	int32 idleNumber = 1;

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	FTimerHandle deathTimer;
	
	UFUNCTION()
	void AnimNotify_Kick();

	UFUNCTION()
	void AnimNotify_Destroy();

};
