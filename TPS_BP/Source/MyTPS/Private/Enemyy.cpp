// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemyy.h"
#include "TPSPlayer.h"
#include "EngineUtils.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemyy::AEnemyy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCollisionProfileName(FName("EnemyPreset"));
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
	
	// 시작 위치를 정한다.
	originLocation = GetActorLocation();
	originRotation = GetActorRotation();
	
	// 체력 변수를 초기화한다.
	currentHP = maxHP;
	
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
		MoveToTarget(DeltaTime);
		break;
	case EEnemyState::ATTACK:
		Attack();
		break;
	case EEnemyState::ATTACKDELAY:
		AttackDelay(DeltaTime);
		break;
	case EEnemyState::RETURN:
		ReturnHome(DeltaTime);
		break;
	case EEnemyState::DAMAGED:
		DamageProcess(DeltaTime);
		break;
	case EEnemyState::DIE:
		Die();
		break;
	default:
		break;
	}

	DrawDebugSphere(GetWorld(), originLocation, limitDistance, 30, FColor::Green, false, 0, 0, 3);
}

void AEnemyy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyy::Idle(float deltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("Idle State"));

	//currentTime += deltaSeconds;

	//// 5초가 지나면 상태를 MOVE 상태로 변경한다.
	//if (currentTime > 3.0f) {
	//	currentTime = 0;
	//	enemyState = EEnemyState::MOVE;
	//	UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
	//}

	// 자신의 전방을 기준으로 좌우 30도 이내, 거리 7미터의 범위에서 플레이어 캐릭터가 접근하면
	// 플레이어 캐릭터를 타겟으로 설정하고, 이동 상태로 전환한다.

	// 1. 찾은 플레이어가 거리 7미터 이내인지 확인한다.
	float targetDistance = FVector::Distance(target->GetActorLocation(), GetActorLocation());

	// 2. 찾은 플레이어가 전방 좌우 30도 이내에 있는지 확인한다.
	FVector forwardVec = GetActorForwardVector();
	FVector directionVec = (target->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	
	float cosTheta = FVector::DotProduct(forwardVec, directionVec);
	float theta_radian = FMath::Acos(cosTheta);
	float theta_degree = FMath::RadiansToDegrees(theta_radian);


	/*if (cosTheta >= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Target is located forward me"));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Target is located back me"));

	}

	UE_LOG(LogTemp, Warning, TEXT("Degree : %.2f", theta_degree));*/

	// 3. 두 조건을 모두 만족하면 이동 상태로 전환한다.
	if (targetDistance < sightDistance && cosTheta > 0 && theta_degree < sightAngle)
	{
		enemyState = EEnemyState::MOVE;
		UE_LOG(LogTemp, Warning, TEXT("I see target!"));
	}
}

void AEnemyy::MoveToTarget(float deltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveToTarget State"));


	// 기준 위치로부터 추격 한계 거리 이상 떨어져있다면
	if (FVector::Distance(originLocation, GetActorLocation()) > limitDistance)
	{
		enemyState = EEnemyState::RETURN;
		UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
		return;
	}





	// 타겟이 있다면 타겟을 쫓아간다.
	// 필요 요소 : 방향, 추격 속력, 공격 가능 거리(최대 접근 거리)
	FVector targetDir = target->GetActorLocation() - GetActorLocation();	// 쫓아가려는 대상이 앞에 와야함. (타겟을 향한 방향)
	targetDir.Z = 0;	// 수평 벡터





	if (targetDir.Length() > attackDistance)		// 타겟과 나 사이의 거리
	{
		GetCharacterMovement()->MaxWalkSpeed = traceSpeed;
		AddMovementInput(targetDir.GetSafeNormal());
		
		// 이동 방향으로 회전한다.
		FRotator currentRot = GetActorRotation();
		FRotator targetRot = targetDir.ToOrientationRotator();		// ToOrientationRotator : 얼마만큼 회전해야하는지 그 값을 계산해줌
		
		FRotator calcRot = FMath::Lerp(currentRot, targetRot, deltaSeconds * rotSpeed);

		SetActorRotation(calcRot);
	}
	else
	{
		enemyState = EEnemyState::ATTACK;
		UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
	}
}
void AEnemyy::Attack()
{
	if (FVector::Distance(GetActorLocation(), target->GetActorLocation()) < attackDistance + 15.0f)	// 거리만 확인할거면 Distance 함수, 방향까지 확인해야하면 벡터 A - B
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack Player!"));
		enemyState = EEnemyState::ATTACKDELAY;
	}
	else
	{
		enemyState = EEnemyState::MOVE;
		UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
	}
}

void AEnemyy::AttackDelay(float deltaSeconds)
{
	// 공격 대기 시간이 1.5초 경과되면 다시 ATTACK 상태로 되돌린다.
	currentTime += deltaSeconds;

	if (currentTime > attackDelayTime)
	{
		currentTime = 0;
		enemyState = EEnemyState::ATTACK;
	}
}

void AEnemyy::ReturnHome(float deltaSeconds)
{
	// 기준 위치로 돌아간다.
	// 필요 요소 : 기준 위치, 한계 거리, 복귀 속력

	FVector dir = originLocation - GetActorLocation();

	// 만약 5cm 이내로 접근했다면
	if (dir.Length() < 10)
	{	
		// 강제로 시작 위치로 이동시킨다.(처음 위치와 회전값 그대로, 똑같은 모습으로 return 되게 하기 위해서)
		SetActorLocation(originLocation);
		SetActorRotation(originRotation);
	}
	else
	{
		// 시작 위치 쪽으로 이동한다.
		GetCharacterMovement()->MaxWalkSpeed = returnSpeed;
		AddMovementInput(dir.GetSafeNormal());

		FRotator lookRotation = FMath::Lerp(GetActorRotation(), dir.ToOrientationRotator(), deltaSeconds * rotSpeed);
		SetActorRotation(lookRotation);
	}

	
}

void AEnemyy::OnDamaged(int32 dmg)
{
	currentHP = FMath::Clamp(currentHP - dmg, 0, maxHP);

	// 데미지 계산 결과 현재 체력이 0보다 크다면
	if (currentHP > 0)
	{
		// 피격 상태로 전환한다.
		enemyState = EEnemyState::DAMAGED;
		hitLocation = GetActorLocation();
	}
	// 그렇지 않으면
	else 	
	{
		// 죽음 상태로 전환한다.
		enemyState = EEnemyState::DIE;
	}
	
		

}

void AEnemyy::DamageProcess(float deltaSeconds)
{
	// 피격 효과를 준다. (넉백 효과 부여)
	 FVector backVec = GetActorForwardVector() * -1.0f;
	 FVector targetLoc = hitLocation + backVec * 50.0f;
	 FVector knockBackLocation = FMath::Lerp(GetActorLocation(), targetLoc, deltaSeconds * 7.0f);

	 if (FVector::Distance(GetActorLocation(), targetLoc) < 10)
	 {
		 SetActorLocation(knockBackLocation, true);
	 }
	 else
	 {
		 enemyState = EEnemyState::MOVE;
	 }

}


void AEnemyy::Die()
{
}

