// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "EnemyActor.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(rootComp);

	arrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow Component"));
	arrowComp->SetupAttachment(rootComp);
	arrowComp->SetRelativeRotation(FRotator(-90, 0, 180));
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// ������ �ð����� ���ʹ̸� �����Ѵ�.
	//  �ʿ� ���� : �ð�(����), ���ʹ� ���� ����
		
	// ������ �ð��� currentTime ������ ������Ų��.
	currentTime += DeltaTime;

	if (currentTime > delayTime) 
	{
		// ���ʹ� �������Ʈ�� �����Ѵ�.
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AEnemyActor>(enemy_bp, arrowComp->GetComponentLocation(), arrowComp->GetComponentRotation(), params);

		// ������ �ð��� 0�ʷ� �ʱ�ȭ�Ѵ�.
		currentTime = 0;
	}

}

