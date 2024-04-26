// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadeActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Enemy.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include <../../../../../../../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayFunctionLibrary.h>


AGrenadeActor::AGrenadeActor()
{
	PrimaryActorTick.bCanEverTick = false;

	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	SetRootComponent(sphereComp);
	sphereComp->SetSphereRadius(10);
	sphereComp->SetCollisionProfileName(FName("Grenade"));
	sphereComp->SetNotifyRigidBodyCollision(true);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	meshComp->SetRelativeLocation(FVector(0, 0, -8));
	meshComp->SetRelativeScale3D(FVector(0.2f));

	effectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect Component"));
	effectComp->SetupAttachment(meshComp);
	effectComp->SetAutoActivate(false);
	effectComp->SetAutoDestroy(false);
}

void AGrenadeActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Block �浹 �̺�Ʈ�� �Լ��� ���ε��ϱ�
	sphereComp->OnComponentHit.AddDynamic(this, &AGrenadeActor::BombAction);

	SetLifeSpan(5.0f);
}

void AGrenadeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenadeActor::Throw(const FVector& throwDir, float throwPower)
{
	// �������� off ���¶�� on ���·� ��ȯ�Ѵ�.
	if (!sphereComp->IsSimulatingPhysics())
	{
		sphereComp->SetSimulatePhysics(true);
	}

	sphereComp->AddImpulse(throwDir * throwPower);
}

// Block���� �ε����� �� ����Ǵ� �Լ�
void AGrenadeActor::BombAction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit Event!!!"));

	// damageRadius �ֺ��� Enemy���� ��� ã�´�.
	TArray<FOverlapResult> hitInfos;
	FCollisionObjectQueryParams objectParams;
	objectParams.AddObjectTypesToQuery(affectType);
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(this);

	bool result = GetWorld()->OverlapMultiByObjectType(hitInfos, GetActorLocation(), FQuat::Identity, objectParams, FCollisionShape::MakeSphere(damageRadius), queryParams);

	if (result)
	{
		// �� Enemy���� ��ȸ�ϸ鼭
		for (const FOverlapResult& hitInfo : hitInfos)
		{
			// Enemy�� HitBomb �Լ��� �����Ų��.
			AEnemy* enemy = Cast<AEnemy>(hitInfo.GetActor());

			if (enemy != nullptr)
			{
				//UE_LOG(LogTemp, Warning, TEXT("%s is damaged!"), *enemy->GetActorNameOrLabel());
				enemy->HitBomb(damagePower, GetActorLocation() - enemy->GetActorLocation(), damageRadius, UpForce);
			}
		}
	}

	if (bombFx->IsValid())
	{
		// static �Լ��� �����ϴ� ���
		//UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), bombFx, GetActorLocation());

		// ������Ʈ�� �����ϴ� ���
		// user parameter - ���� �����͸� �߰��� ��
		effectComp->SetFloatParameter(FName("ExplosionSize"), 3.0f);
		effectComp->SetVariableLinearColor(FName("ExplosionColor"), FLinearColor::Blue);
		
		// user parameter - �迭 �����͸� �߰��� ��
		TArray<FVector> pathPoints;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(effectComp, FName("Path"), pathPoints);

		effectComp->Activate();
		//effectComp->ActivateSystem();
		//effectComp->SetPaused(true);

	}
	//Destroy();
}

