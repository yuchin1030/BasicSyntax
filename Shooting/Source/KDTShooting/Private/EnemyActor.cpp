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

	// 박스 컴포넌트를 최상단 컴포넌트로 생성 및 설정한다.
	enemyColl = CreateDefaultSubobject<UBoxComponent>(TEXT("enemyColl"));
	SetRootComponent(enemyColl);
	enemyColl->SetBoxExtent(FVector(50));

	// 박스 컴포넌트의 콜리전 설정
	// 응답 타입 : Query 타입
	// 오브젝트 타입(채널) : Enemy
	// 응답 처리 : Player, Bullet 채널에 대해서 overlap으로 설정한다. 다른 채널에 대해서는 ignore로 처리한다.

	/*// 개별처리
	enemyColl->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	enemyColl->SetCollisionObjectType(ECC_GameTraceChannel2);
	enemyColl->SetCollisionResponseToAllChannels(ECR_Ignore);
	enemyColl->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	enemyColl->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Overlap);*/

	// 프리셋으로 일괄처리
	enemyColl->SetCollisionProfileName(FName("EnemyPreset"));

	enemyColl->SetGenerateOverlapEvents(true);
	//enemyColl->SetNotifyRigidBodyCollision(true); --> 히트 이벤트(Block) 발생을 가능하게 설정; (블루프린트에서 이름은) Collsion의 Simulation Generates Hit events

	// 스태틱 메시 컴포넌트를 박스 컴포넌트의 자식 컴포넌트로 생성 및 등록한다.
	enemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("enemy"));
	enemy->SetupAttachment(enemyColl);
	enemy->SetRelativeLocation(FVector(0, 0, -50));
	enemy->SetCollisionEnabled(ECollisionEnabled::NoCollision);




}

void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();

	// -------------------------- 이 기능을 Tick에 넣으면 enemy가 계속 쫓아옴

	// 0~99 사이의 임의의 숫자를 뽑았을 때, 
	int32 num = FMath::RandRange(0, 99);									// Rand : 진짜 무작위수, RandRange : 범위 안의 수가 랜덤

	if (num >= rate) {	// 그 숫자가 rate보다 크면
		// 이동방향을 정면방향으로 한다.

		//moveDir 변수에 자신의 앞 방향을 넣는다.
		moveDir = GetActorForwardVector();
	}
	else {	// 그렇지 않으면,
		// 이동방향을 플레이어를 향한 방향으로 한다.



		// 1-2. 반환받은 player 액터를 player 변수에 넣는다.
		AShootingPlayer* player = FindPlayer_BP();
		//AShootingPlayer* player = FindPlayer_Iterator();

		if (player != nullptr) {
			// 2.  moveDir 변수에 내가 플레이어를 바라보는 방향 벡터를 구해서 넣는다. --> 플레이어 위치 - 나의 위치
			FVector lookDirection = player->GetActorLocation() - GetActorLocation();
			moveDir = lookDirection.GetSafeNormal();
		}
		else {
			moveDir = GetActorForwardVector();
		}
		

		// normalized 안해주면 lookDirection의 길이를 통해 플레이어와 나의 거리를 알 수 있음
		// normalized 해주면 enemy가 player방향으로 따라옴

	}

	// ----------------------------

	// 현재 월드의 모든 액터(AActor*)의 이름을 UE_LOG로 출력
	/*for (TActorIterator<AActor> iter(GetWorld()); iter; ++iter)
	{
		AActor* foundActor = *iter;

		if (foundActor->GetName().Contains(FString("Player"))) {	// Player가 이름에 들어간 액터들만 출력
			UE_LOG(LogTemp, Warning, TEXT("%s"), *foundActor->GetName());
		}
		
		
	}*/




	// 오버랩 이벤트 함수를 BoxComponent의 BeginOverlap delegate에 연결한다.
	enemyColl->OnComponentBeginOverlap.AddDynamic(this, &AEnemyActor::OnOverlapPlayer);
}

void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// moveDir의 방향과 moveSpeed 속력으로 이동한다.
	// p = p0 + vt 
	SetActorLocation(GetActorLocation() + moveDir * moveSpeed * DeltaTime);

}

// GetAllActorsOfClass 방식으로 찾기
AShootingPlayer* AEnemyActor::FindPlayer_BP()
{
	// 1. 플레이어의 월드 상의 위치를 찾는다.
	// 1-1. 현재 월드데이터에서 AShootingPlayer 클래스로 된 모든 액터들을 찾는다.
	TArray<AActor*> players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShootingPlayer::StaticClass(), players);

	// 찾은 액터들 중의 첫 번째 액터를 반환한다. but
	// players는 AActor 타입이고 player는 AShootingPlayer 타입이기 때문에, 
	// AShootingPlayer 클래스 형태로 변환해서 반환한다.

	// players 배열에 1개라도 들어간 값이 있다면, 그 값들 중에 0번을 반환하고
	if (players.Num() > 0) {
		return Cast<AShootingPlayer>(players[0]);
	}
	// 아무것도 없으면 nullptr을 반환한다.
	else {
		return nullptr;
	}
	
}

// iterator 방식으로 찾기
AShootingPlayer* AEnemyActor::FindPlayer_Iterator()
{
	// for (TActorIterator<찾으려는 클래스> 변수이름(GetWorld()) ; 변수 이름 ; ++변수 이름)

	TArray<AShootingPlayer*> players;

	for (TActorIterator<AShootingPlayer> player(GetWorld()); player; ++player)
	{
		players.Add(*player);
	}

	// players 배열에 1개라도 들어간 앖이 있다면, 그 값들 중에 0번을 반환하고
	if (players.Num() > 0) {
		return players[0];
	}
	// 아무것도 없으면 nullptr을 반환한다.
	else {
		return nullptr;
	}

}

void AEnemyActor::OnOverlapPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 만일 부딪힌 대상이 플레이어라면
	AShootingPlayer* player = Cast<AShootingPlayer>(OtherActor);	// 캐스팅이 되면 player인거고, 안 되면 player가 아님을 뜻하므로 null이 됨

	// 플레이어를 제거한다.
	if (player != nullptr) {
		player->Destroy();

		// 게임 모드 클래스에 있는 ShowGameOverUI() 함수를 호출한다.
		AShootingGameModeBase* gm = Cast<AShootingGameModeBase>(GetWorld()->GetAuthGameMode());

		if (gm != nullptr) {
			gm->ShowGameOverUI();

			gm->SaveBestScore();
		}

		// 나도 제거한다.
		Destroy();
	}

	
}

