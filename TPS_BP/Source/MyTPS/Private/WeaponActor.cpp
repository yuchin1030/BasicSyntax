// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TPSPlayer.h"

AWeaponActor::AWeaponActor()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	boxComp->SetCollisionProfileName(FName("WeaponPreset"));
	boxComp->SetSimulatePhysics(true);
	boxComp->SetEnableGravity(true);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &AWeaponActor::OnOverlapPlayer);
}

void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponActor::Release()
{
	FDetachmentTransformRules rules = FDetachmentTransformRules::KeepWorldTransform;
	DetachFromActor(rules);
	boxComp->SetSimulatePhysics(true);
}

void AWeaponActor::OnOverlapPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// �浹�� ����� �÷��̾���
	ATPSPlayer* player = Cast<ATPSPlayer>(OtherActor);

	if (player != nullptr)
	{
		// ����, �÷��̾ ���� ���� ��� ���� ���� ���¶��
		if (player->attachedWeapon == nullptr)
		{
			// �ڽ��� Physics �ɼ��� ���ش�.
			boxComp->SetSimulatePhysics(false);		// physics �� ���� ���ְ� attach ����� attach �� ���� �۵���.

			// �÷��̾��� bodyMesh�ʿ� �ִ� "GunSocket"�̶�� �̸��� ���Ͽ� �ڱ� �ڽ��� ������Ų��.
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetIncludingScale;
			
			// ������ ����� �÷��̾�� �ڱ� �ڽŰ��� ����� �Ÿ�, ȸ��, ũ�⸦ Relative Transform ���� �����Ų��.
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			
			// ������ ����� �÷��̾�� �ڱ� �ڽ��� world transform ���� relative transform ���� �����Ų��.
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepRelativeTransform;


			AttachToComponent(player->GetMesh(), attachRules, FName("GunSocket"));
			SetActorRelativeLocation(snapOffset);

			// �÷��̾��� attachedWeapon ������ �ڱ� �ڽ��� ����Ѵ�.
			player->attachedWeapon = this;

			// �÷��̾��� �ִϸ��̼� �ν��Ͻ��� useSniper ���� ���� �����Ѵ�.
			player->SetGunAnimType(bSniperGun);
		}

	}

}





