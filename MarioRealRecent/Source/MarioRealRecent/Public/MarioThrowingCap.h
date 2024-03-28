// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarioThrowingCap.generated.h"

UCLASS()
class MARIOREALRECENT_API AMarioThrowingCap : public AActor
{
	GENERATED_BODY()
	
public:	
	AMarioThrowingCap();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="MySettings")
	class USkeletalMeshComponent* cap;

	UPROPERTY(EditAnywhere, Category="MySettings")
	class USphereComponent* throwCapColl;

	UPROPERTY(EditAnywhere, Category="MySettings")
	class URotatingMovementComponent* rotMovement;

	UPROPERTY(EditAnywhere, Category="MySettings")
	class UProjectileMovementComponent* proMovement;

	UPROPERTY(EditAnywhere, Category="MySettings")
	class USceneComponent* defaultSceneRoot;

	class AMarioRealRecentCharacter* pChar;

	class AMarioRealRecentCharacter* playerVar;

	class AMarioPunchingCap* punchCapVar;

	UFUNCTION()
	void ReturnToPlayer();

private:
	class AMarioRealRecentCharacter* FindPlayer_BP();

	class AMarioPunchingCap* FindPunchCap_BP();

};
