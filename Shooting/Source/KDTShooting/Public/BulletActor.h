// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletActor.generated.h"

UCLASS()
class KDTSHOOTING_API ABulletActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABulletActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UStaticMeshComponent* smComp;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	float speed = 1000;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UParticleSystem* explosionFX;

private:
	UFUNCTION()	// 에디터에 함수라는 것을 알림 (안 붙이면 에디터에는 존재하지 않는 함수. 그냥 이 코드에만 있음.) -> 함수라는 것을 알려야 bind 가능
	void OnOverlapEnemy(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
						int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
