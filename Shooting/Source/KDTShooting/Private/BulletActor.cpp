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
	boxComp->SetBoxExtent(FVector(50));	// x,y,z�� ��� ���� ���϶� �ϳ��� ���ָ� ��� �� ������ ������
	boxComp->SetWorldScale3D(FVector(0.7f, 0.3f, 1.0f));

	/*// 1. �ݸ��� ������ ���� �����Ҷ�
	// �ڽ��� �ݸ����� �浹 �� ���� ������ ����ϵ��� �����Ѵ�.(����ȿ���� X)
	boxComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// �ݸ����� ������Ʈ Ÿ���� GameTraceChannel1(Bullet)�� ����
	boxComp->SetCollisionObjectType(ECC_GameTraceChannel1);	// ���� ���� collision preset ��� -> Config - DefaultEngine �޸������� ��� ä���̸��� �־������. ECC_Bullet(���� ���� preset �̸�) �ƴ�.
	
	// �ٸ� �ݸ����� �浹���� ���� ������ �ϰ������� Ignore�� ����
	boxComp->SetCollisionResponseToAllChannels(ECR_Ignore);	

	// GameTraceChannel2(Enemy)�� �浹���� ���� ������ Overlap���� ����
	boxComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap); */

	// 2. �ݸ��� ������ �������� �̿��Ͽ� �����Ҷ�
	boxComp->SetCollisionProfileName(FName("BulletPreset")); // Project Settings - Engine - Collision - Preset - New : ���� ����

	// �ڽ� �ݸ����� ������ �浹 �̺�Ʈ�� ���� �� �ִ� ���·� �Ѵ�.
	boxComp->SetGenerateOverlapEvents(true);

	


	smComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Component"));
	smComp->SetupAttachment(boxComp);
	smComp->SetRelativeLocation(FVector(0, 0, -50));

	// �޽��� �ݸ����� ������� �ʵ��� ó���Ѵ�.
	smComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABulletActor::BeginPlay()
{
	Super::BeginPlay();

	// �浹 �̺�Ʈ�� �ݵ�� BeginPlay���� �ؾ��� (�����ڿ��� �� �� ����; ���������� �ʾҴµ� �� ���� ���� ����)
	// ������ �浹 �ÿ� �߻��� �̺�Ʈ�� �Լ��� �����Ѵ�.
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ABulletActor::OnOverlapEnemy);	// ABulletActor�� OnOverlapEnemy �Լ��� ����
	
}

void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// p = p0 + vt
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * speed * DeltaTime);	// FVector(1, 0, 0) : ������ǥ(World)
																						// GetActorForwardVector : ���� �������, GetActorRightVector, GetActorUpVector (Down�� ����; -1 �����ָ� ��)

}

void ABulletActor::OnOverlapEnemy(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Collide Actor name : %s"), *OtherActor->GetActorNameOrLabel());	// string�� *�ٿ������(������ �ƴ�)

	// �浹�� ������ ��ġ�� ���� ȿ���� �����Ѵ�.
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFX, OtherActor->GetActorLocation(), FRotator::ZeroRotator);

	// �ε��� ������ �����Ѵ�.
	OtherActor->Destroy();

	// ���� ��� Ŭ������ ������ 1�� �߰��Ѵ�.
	// 1. ���� ��� Ŭ������ �����Ѵ�.
	AGameModeBase* gm = GetWorld()->GetAuthGameMode(); //  (�� ���忡 ������ �ִ� ���� ��带 �����Ͷ�)
	AShootingGameModeBase* myGM = Cast<AShootingGameModeBase>(gm);	

	if (myGM != nullptr) {
		// 2. AddPoint �Լ��� ȣ���Ѵ�.
		// 2-1. �Լ� ȣ�� �ÿ� �Ű������� 1�̶�� ���� �����Ѵ�.
		myGM->AddPoint(1);
		
		// �߰��� ����(���� ����)�� ����غ���.
		UE_LOG(LogTemp, Warning, TEXT("Current Point : %d"), myGM->GetCurrentPoint());
	}

	

	// ���� �����Ѵ�.
	Destroy();
}

