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

	// �⺻ ���¸� IDLE ���·� �ʱ�ȭ�Ѵ�.
	enemyState = EEnemyState::IDLE;

	// ���忡 �ִ� �÷��̾ ã�´�.
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

	// 5�ʰ� ������ ���¸� MOVE ���·� �����Ѵ�.
	if (currentTime > 5) {
		enemyState = EEnemyState::MOVE;
		currentTime = 0;
	}

}

void AEnemyy::MoveToTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("MoveToTarget State"));

	// Ÿ���� �ִٸ� Ÿ���� �Ѿư���.
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

