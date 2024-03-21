// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "ShootingPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"


AEnemyActor::AEnemyActor()
{

	PrimaryActorTick.bCanEverTick = true;

	// �ڽ� ������Ʈ�� �ֻ�� ������Ʈ�� ���� �� �����Ѵ�.
	enemyColl = CreateDefaultSubobject<UBoxComponent>(TEXT("enemyColl"));
	SetRootComponent(enemyColl);
	enemyColl->SetBoxExtent(FVector(50));

	// ����ƽ �޽� ������Ʈ�� �ڽ� ������Ʈ�� �ڽ� ������Ʈ�� ���� �� ����Ѵ�.
	enemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("enemy"));
	enemy->SetupAttachment(enemyColl);
	enemy->SetRelativeLocation(FVector(0, 0, -50));




}

void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();

	// -------------------------- �� ����� Tick�� ������ enemy�� ��� �Ѿƿ�

	// 0~99 ������ ������ ���ڸ� �̾��� ��, 
	int32 num = FMath::RandRange(0, 99);									// Rand : ��¥ ��������, RandRange : ���� ���� ���� ����

	if (num >= rate) {	// �� ���ڰ� rate���� ũ��
		// �̵������� ����������� �Ѵ�.

		//moveDir ������ �ڽ��� �� ������ �ִ´�.
		moveDir = GetActorForwardVector();
	}
	else {	// �׷��� ������,
		// �̵������� �÷��̾ ���� �������� �Ѵ�.



		// 1-2. ��ȯ���� player ���͸� player ������ �ִ´�.
		AShootingPlayer* player = FindPlayer_BP();
		//AShootingPlayer* player = FindPlayer_Iterator();

		// 2.  moveDir ������ ���� �÷��̾ �ٶ󺸴� ���� ���͸� ���ؼ� �ִ´�. --> --> �÷��̾� ��ġ - ���� ��ġ
		FVector lookDirection = player->GetActorLocation() - GetActorLocation();
		moveDir = lookDirection.GetSafeNormal();

		// normalized �����ָ� lookDirection�� ���̸� ���� �÷��̾�� ���� �Ÿ��� �� �� ����
		// normalized ���ָ� enemy�� player�������� �����

	}

	// ----------------------------

	// ���� ������ ��� ����(AActor*)�� �̸��� UE_LOG�� ���
	for (TActorIterator<AActor> iter(GetWorld()); iter; ++iter)
	{
		AActor* foundActor = *iter;

		if (foundActor->GetName().Contains(FString("Player"))) {	// Player�� �̸��� �� ���͵鸸 ���
			UE_LOG(LogTemp, Warning, TEXT("%s"), *foundActor->GetName());
		}
		
		
	}
	
}

void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// moveDir�� ����� moveSpeed �ӷ����� �̵��Ѵ�.
	// p = p0 + vt 
	SetActorLocation(GetActorLocation() + moveDir * moveSpeed * DeltaTime);

}

// GetAllActorsOfClass ������� ã��
AShootingPlayer* AEnemyActor::FindPlayer_BP()
{
	// 1. �÷��̾��� ���� ���� ��ġ�� ã�´�.
	// 1-1. ���� ���嵥���Ϳ��� AShootingPlayer Ŭ������ �� ��� ���͵��� ã�´�.
	TArray<AActor*> players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShootingPlayer::StaticClass(), players);

	// ã�� ���͵� ���� ù ��° ���͸� ��ȯ�Ѵ�. but
	// players�� AActor Ÿ���̰� player�� AShootingPlayer Ÿ���̱� ������, 
	// AShootingPlayer Ŭ���� ���·� ��ȯ�ؼ� ��ȯ�Ѵ�.
	return Cast<AShootingPlayer>(players[0]);

}

// iterator ������� ã��
AShootingPlayer* AEnemyActor::FindPlayer_Iterator()
{
	// for (TActorIterator<ã������ Ŭ����> �����̸�(GetWorld()) ; ���� �̸� ; ++���� �̸�)

	TArray<AShootingPlayer*> players;

	for (TActorIterator<AShootingPlayer> player(GetWorld()); player; ++player)
	{
		players.Add(*player);
	}

	return players[0];
}

