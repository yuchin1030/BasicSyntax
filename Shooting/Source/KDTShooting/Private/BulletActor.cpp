#include "BulletActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingGameModeBase.h"

ABulletActor::ABulletActor()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);
	boxComp->SetBoxExtent(FVector(50));	// x,y,z축 모두 같은 값일때 하나만 써주면 모두 그 값으로 설정됨
	boxComp->SetWorldScale3D(FVector(0.7f, 0.3f, 1.0f));

	/*// 1. 콜리전 설정을 직접 수정할때
	// 박스의 콜리전은 충돌 시 영역 감지만 사용하도록 설정한다.(물리효과는 X)
	boxComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// 콜리전의 오브젝트 타입을 GameTraceChannel1(Bullet)로 설정
	boxComp->SetCollisionObjectType(ECC_GameTraceChannel1);	// 내가 만든 collision preset 사용 -> Config - DefaultEngine 메모장으로 열어서 채널이름을 넣어줘야함. ECC_Bullet(내가 만든 preset 이름) 아님.
	
	// 다른 콜리전과 충돌했을 때의 응답을 일괄적으로 Ignore로 설정
	boxComp->SetCollisionResponseToAllChannels(ECR_Ignore);	

	// GameTraceChannel2(Enemy)와 충돌했을 때의 응답을 Overlap으로 설정
	boxComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap); */

	// 2. 콜리전 설정을 프리셋을 이용하여 수정할때
	boxComp->SetCollisionProfileName(FName("BulletPreset")); // Project Settings - Engine - Collision - Preset - New : 직접 만듦

	// 박스 콜리전의 오버랩 충돌 이벤트를 받을 수 있는 상태로 한다.
	boxComp->SetGenerateOverlapEvents(true);

	


	smComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Component"));
	smComp->SetupAttachment(boxComp);
	smComp->SetRelativeLocation(FVector(0, 0, -50));

	// 메시의 콜리전은 사용하지 않도록 처리한다.
	smComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABulletActor::BeginPlay()
{
	Super::BeginPlay();

	// 충돌 이벤트는 반드시 BeginPlay에서 해야함 (생성자에서 할 수 없음; 생성되지도 않았는데 할 수가 없기 때문)
	// 오버랩 충돌 시에 발생할 이벤트와 함수를 연결한다.
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ABulletActor::OnOverlapEnemy);	// ABulletActor의 OnOverlapEnemy 함수와 연결
	
}

void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// p = p0 + vt
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * speed * DeltaTime);	// FVector(1, 0, 0) : 절대좌표(World)
																						// GetActorForwardVector : 나의 정면방향, GetActorRightVector, GetActorUpVector (Down은 없음; -1 곱해주면 됨)

}

void ABulletActor::OnOverlapEnemy(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Collide Actor name : %s"), *OtherActor->GetActorNameOrLabel());	// string은 *붙여줘야함(포인터 아님)

	// 충돌한 상대방의 위치에 폭발 효과를 실행한다.
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFX, OtherActor->GetActorLocation(), FRotator::ZeroRotator);

	// 부딪힌 상대방을 제거한다.
	OtherActor->Destroy();

	// 게임 모드 클래스의 점수를 1점 추가한다.
	// 1. 게임 모드 클래스에 접근한다.
	AGameModeBase* gm = GetWorld()->GetAuthGameMode(); //  (이 월드에 권한이 있는 게임 모드를 가져와라)
	AShootingGameModeBase* myGM = Cast<AShootingGameModeBase>(gm);	

	if (myGM != nullptr) {
		// 2. AddPoint 함수를 호출한다.
		// 2-1. 함수 호출 시에 매개변수에 1이라는 값을 전달한다.
		myGM->AddPoint(1);
		
		// 추가된 점수(현재 점수)를 출력해본다.
		UE_LOG(LogTemp, Warning, TEXT("Current Point : %d"), myGM->GetCurrentPoint());
	}

	

	// 나도 제거한다.
	Destroy();
}

