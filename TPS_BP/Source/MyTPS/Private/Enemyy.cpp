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

	// �⺻ ���¸� IDLE ���·� �ʱ�ȭ�Ѵ�.
	enemyState = EEnemyState::IDLE;

	// ���忡 �ִ� �÷��̾ ã�´�.
	for (TActorIterator<ATPSPlayer> player(GetWorld()); player; ++player)
	{
		target = *player;
	}
	
	// ���� ��ġ�� ���Ѵ�.
	originLocation = GetActorLocation();
	originRotation = GetActorRotation();
	
	// ü�� ������ �ʱ�ȭ�Ѵ�.
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

	//// 5�ʰ� ������ ���¸� MOVE ���·� �����Ѵ�.
	//if (currentTime > 3.0f) {
	//	currentTime = 0;
	//	enemyState = EEnemyState::MOVE;
	//	UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
	//}

	// �ڽ��� ������ �������� �¿� 30�� �̳�, �Ÿ� 7������ �������� �÷��̾� ĳ���Ͱ� �����ϸ�
	// �÷��̾� ĳ���͸� Ÿ������ �����ϰ�, �̵� ���·� ��ȯ�Ѵ�.

	// 1. ã�� �÷��̾ �Ÿ� 7���� �̳����� Ȯ���Ѵ�.
	float targetDistance = FVector::Distance(target->GetActorLocation(), GetActorLocation());

	// 2. ã�� �÷��̾ ���� �¿� 30�� �̳��� �ִ��� Ȯ���Ѵ�.
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

	// 3. �� ������ ��� �����ϸ� �̵� ���·� ��ȯ�Ѵ�.
	if (targetDistance < sightDistance && cosTheta > 0 && theta_degree < sightAngle)
	{
		enemyState = EEnemyState::MOVE;
		UE_LOG(LogTemp, Warning, TEXT("I see target!"));
	}
}

void AEnemyy::MoveToTarget(float deltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveToTarget State"));


	// ���� ��ġ�κ��� �߰� �Ѱ� �Ÿ� �̻� �������ִٸ�
	if (FVector::Distance(originLocation, GetActorLocation()) > limitDistance)
	{
		enemyState = EEnemyState::RETURN;
		UE_LOG(LogTemp, Warning, TEXT("State Transition : %s"), *UEnum::GetValueAsString<EEnemyState>(enemyState));
		return;
	}





	// Ÿ���� �ִٸ� Ÿ���� �Ѿư���.
	// �ʿ� ��� : ����, �߰� �ӷ�, ���� ���� �Ÿ�(�ִ� ���� �Ÿ�)
	FVector targetDir = target->GetActorLocation() - GetActorLocation();	// �Ѿư����� ����� �տ� �;���. (Ÿ���� ���� ����)
	targetDir.Z = 0;	// ���� ����





	if (targetDir.Length() > attackDistance)		// Ÿ�ٰ� �� ������ �Ÿ�
	{
		GetCharacterMovement()->MaxWalkSpeed = traceSpeed;
		AddMovementInput(targetDir.GetSafeNormal());
		
		// �̵� �������� ȸ���Ѵ�.
		FRotator currentRot = GetActorRotation();
		FRotator targetRot = targetDir.ToOrientationRotator();		// ToOrientationRotator : �󸶸�ŭ ȸ���ؾ��ϴ��� �� ���� �������
		
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
	if (FVector::Distance(GetActorLocation(), target->GetActorLocation()) < attackDistance + 15.0f)	// �Ÿ��� Ȯ���ҰŸ� Distance �Լ�, ������� Ȯ���ؾ��ϸ� ���� A - B
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
	// ���� ��� �ð��� 1.5�� ����Ǹ� �ٽ� ATTACK ���·� �ǵ�����.
	currentTime += deltaSeconds;

	if (currentTime > attackDelayTime)
	{
		currentTime = 0;
		enemyState = EEnemyState::ATTACK;
	}
}

void AEnemyy::ReturnHome(float deltaSeconds)
{
	// ���� ��ġ�� ���ư���.
	// �ʿ� ��� : ���� ��ġ, �Ѱ� �Ÿ�, ���� �ӷ�

	FVector dir = originLocation - GetActorLocation();

	// ���� 5cm �̳��� �����ߴٸ�
	if (dir.Length() < 10)
	{	
		// ������ ���� ��ġ�� �̵���Ų��.(ó�� ��ġ�� ȸ���� �״��, �Ȱ��� ������� return �ǰ� �ϱ� ���ؼ�)
		SetActorLocation(originLocation);
		SetActorRotation(originRotation);
	}
	else
	{
		// ���� ��ġ ������ �̵��Ѵ�.
		GetCharacterMovement()->MaxWalkSpeed = returnSpeed;
		AddMovementInput(dir.GetSafeNormal());

		FRotator lookRotation = FMath::Lerp(GetActorRotation(), dir.ToOrientationRotator(), deltaSeconds * rotSpeed);
		SetActorRotation(lookRotation);
	}

	
}

void AEnemyy::OnDamaged(int32 dmg)
{
	currentHP = FMath::Clamp(currentHP - dmg, 0, maxHP);

	// ������ ��� ��� ���� ü���� 0���� ũ�ٸ�
	if (currentHP > 0)
	{
		// �ǰ� ���·� ��ȯ�Ѵ�.
		enemyState = EEnemyState::DAMAGED;
		hitLocation = GetActorLocation();
	}
	// �׷��� ������
	else 	
	{
		// ���� ���·� ��ȯ�Ѵ�.
		enemyState = EEnemyState::DIE;
	}
	
		

}

void AEnemyy::DamageProcess(float deltaSeconds)
{
	// �ǰ� ȿ���� �ش�. (�˹� ȿ�� �ο�)
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

