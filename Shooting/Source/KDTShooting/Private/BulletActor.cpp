#include "BulletActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ABulletActor::ABulletActor()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);
	boxComp->SetBoxExtent(FVector(50));	// x,y,z�� ��� ���� ���϶� �ϳ��� ���ָ� ��� �� ������ ������
	boxComp->SetWorldScale3D(FVector(0.7f, 0.3f, 1.0f));

	smComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Component"));
	smComp->SetupAttachment(boxComp);
	smComp->SetRelativeLocation(FVector(0, 0, -50));
}

void ABulletActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// p = p0 + vt
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * speed * DeltaTime);	// FVector(1, 0, 0) : ������ǥ(World)
																						// GetActorForwardVector : ���� �������, GetActorRightVector, GetActorUpVector (Down�� ����; -1 �����ָ� ��)

}

