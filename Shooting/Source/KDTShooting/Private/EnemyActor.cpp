// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "ShootingPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "ShootingGameModeBase.h"


AEnemyActor::AEnemyActor()
{

	PrimaryActorTick.bCanEverTick = true;

	// �ڽ� ������Ʈ�� �ֻ�� ������Ʈ�� ���� �� �����Ѵ�.
	enemyColl = CreateDefaultSubobject<UBoxComponent>(TEXT("enemyColl"));
	SetRootComponent(enemyColl);
	enemyColl->SetBoxExtent(FVector(50));

	// �ڽ� ������Ʈ�� �ݸ��� ����
	// ���� Ÿ�� : Query Ÿ��
	// ������Ʈ Ÿ��(ä��) : Enemy
	// ���� ó�� : Player, Bullet ä�ο� ���ؼ� overlap���� �����Ѵ�. �ٸ� ä�ο� ���ؼ��� ignore�� ó���Ѵ�.

	/*// ����ó��
	enemyColl->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	enemyColl->SetCollisionObjectType(ECC_GameTraceChannel2);
	enemyColl->SetCollisionResponseToAllChannels(ECR_Ignore);
	enemyColl->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	enemyColl->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Overlap);*/

	// ���������� �ϰ�ó��
	enemyColl->SetCollisionProfileName(FName("EnemyPreset"));

	enemyColl->SetGenerateOverlapEvents(true);
	//enemyColl->SetNotifyRigidBodyCollision(true); --> ��Ʈ �̺�Ʈ(Block) �߻��� �����ϰ� ����; (�������Ʈ���� �̸���) Collsion�� Simulation Generates Hit events

	// ����ƽ �޽� ������Ʈ�� �ڽ� ������Ʈ�� �ڽ� ������Ʈ�� ���� �� ����Ѵ�.
	enemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("enemy"));
	enemy->SetupAttachment(enemyColl);
	enemy->SetRelativeLocation(FVector(0, 0, -50));
	enemy->SetCollisionEnabled(ECollisionEnabled::NoCollision);




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

		if (player != nullptr) {
			// 2.  moveDir ������ ���� �÷��̾ �ٶ󺸴� ���� ���͸� ���ؼ� �ִ´�. --> �÷��̾� ��ġ - ���� ��ġ
			FVector lookDirection = player->GetActorLocation() - GetActorLocation();
			moveDir = lookDirection.GetSafeNormal();
		}
		else {
			moveDir = GetActorForwardVector();
		}
		

		// normalized �����ָ� lookDirection�� ���̸� ���� �÷��̾�� ���� �Ÿ��� �� �� ����
		// normalized ���ָ� enemy�� player�������� �����

	}

	// ----------------------------

	// ���� ������ ��� ����(AActor*)�� �̸��� UE_LOG�� ���
	/*for (TActorIterator<AActor> iter(GetWorld()); iter; ++iter)
	{
		AActor* foundActor = *iter;

		if (foundActor->GetName().Contains(FString("Player"))) {	// Player�� �̸��� �� ���͵鸸 ���
			UE_LOG(LogTemp, Warning, TEXT("%s"), *foundActor->GetName());
		}
		
		
	}*/




	// ������ �̺�Ʈ �Լ��� BoxComponent�� BeginOverlap delegate�� �����Ѵ�.
	enemyColl->OnComponentBeginOverlap.AddDynamic(this, &AEnemyActor::OnOverlapPlayer);
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

	// players �迭�� 1���� �� ���� �ִٸ�, �� ���� �߿� 0���� ��ȯ�ϰ�
	if (players.Num() > 0) {
		return Cast<AShootingPlayer>(players[0]);
	}
	// �ƹ��͵� ������ nullptr�� ��ȯ�Ѵ�.
	else {
		return nullptr;
	}
	
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

	// players �迭�� 1���� �� ���� �ִٸ�, �� ���� �߿� 0���� ��ȯ�ϰ�
	if (players.Num() > 0) {
		return players[0];
	}
	// �ƹ��͵� ������ nullptr�� ��ȯ�Ѵ�.
	else {
		return nullptr;
	}

}

void AEnemyActor::OnOverlapPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// ���� �ε��� ����� �÷��̾���
	AShootingPlayer* player = Cast<AShootingPlayer>(OtherActor);	// ĳ������ �Ǹ� player�ΰŰ�, �� �Ǹ� player�� �ƴ��� ���ϹǷ� null�� ��

	// �÷��̾ �����Ѵ�.
	if (player != nullptr) {
		player->Destroy();

		// ���� ��� Ŭ������ �ִ� ShowGameOverUI() �Լ��� ȣ���Ѵ�.
		AShootingGameModeBase* gm = Cast<AShootingGameModeBase>(GetWorld()->GetAuthGameMode());

		if (gm != nullptr) {
			gm->ShowGameOverUI();

			gm->SaveBestScore();
		}

		// ���� �����Ѵ�.
		Destroy();
	}

	
}

