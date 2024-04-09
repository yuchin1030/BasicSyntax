// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemyy.h"
#include "TPSPlayer.h"
#include "EngineUtils.h"

AEnemyy::AEnemyy()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyy::BeginPlay()
{
	Super::BeginPlay();

	// 기본 상태를 IDLE 상태로 초기화한다.
	enemyState = EEnemyState::IDLE;

	// 월드에 있는 플레이어를 찾는다.
	for (TActorIterator<ATPSPlayer> player(GetWorld()); player; ++player)
	{
		target = *player;
	}
	
	
}

void AEnemyy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	switch (enemyState)
	{
	case EEnemyState::IDLE:
		Idle(DeltaTime);
		break;
	case EEnemyState::MOVE:
		MoveToTarget();
		break;
	case EEnemyState::ATTACK:
		Attack();
		break;
	case EEnemyState::ATTACKDELAY:
		AttackDelay();
		break;
	case EEnemyState::RETURN:
		ReturnHome();
		break;
	case EEnemyState::DAMAGED:
		OnDamaged();
		break;
	case EEnemyState::DIE:
		Die();
		break;
	default:
		break;
	}
}

void AEnemyy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyy::Idle(float deltaSeconds)
{
	UE_LOG(LogTemp, Warning, TEXT("Idle State"));

	currentTime += deltaSeconds;

	// 5초가 지나면 상태를 MOVE 상태로 변경한다.
	if (currentTime > 5) {
		enemyState = EEnemyState::MOVE;
		currentTime = 0;
	}

}

void AEnemyy::MoveToTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("MoveToTarget State"));

	// 타겟이 있다면 타겟을 쫓아간다.
}
void AEnemyy::Attack()
{
}

void AEnemyy::AttackDelay()
{
}

void AEnemyy::ReturnHome()
{
}

void AEnemyy::OnDamaged()
{
}

void AEnemyy::Die()
{
}

