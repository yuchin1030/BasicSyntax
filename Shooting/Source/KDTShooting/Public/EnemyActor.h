// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActor.generated.h"

UCLASS()
class KDTSHOOTING_API AEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "My Settings")
	class UStaticMeshComponent* enemy;

	UPROPERTY(VisibleAnywhere, Category = "My Settings")
	class UBoxComponent* enemyColl;

	UPROPERTY(EditAnywhere, Category = "My Settings")
	float moveSpeed = 750.0f;

	UPROPERTY(EditAnywhere, Category = "My Settings")
	int32 rate = 60;


private:
	FVector moveDir;

	class AShootingPlayer* FindPlayer_BP();
	class AShootingPlayer* FindPlayer_Iterator();

	UFUNCTION()
	void OnOverlapPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
