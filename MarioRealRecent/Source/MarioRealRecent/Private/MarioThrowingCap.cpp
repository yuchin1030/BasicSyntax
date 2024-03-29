// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioThrowingCap.h"
#include <Components/SkeletalMeshComponent.h>
#include <Components/SphereComponent.h>
#include <Components/BoxComponent.h>
#include <GameFramework/RotatingMovementComponent.h>
#include <GameFramework/ProjectileMovementComponent.h>
#include <Components/SceneComponent.h>
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "../MarioRealRecentCharacter.h"	// ../ : ���������� �ǹ�
//#include "MarioRealRecentCharacter.h"
#include "GameFramework/Character.h"
#include "MarioPunchingCap.h"


// Sets default values
AMarioThrowingCap::AMarioThrowingCap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(defaultSceneRoot);

	cap = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("marioCap"));
	cap->SetupAttachment(defaultSceneRoot);

	throwCapColl = CreateDefaultSubobject<USphereComponent>(TEXT("capCollision"));
	throwCapColl->SetupAttachment(cap);
	throwCapColl->SetRelativeLocation(FVector(0, 0, 20));
	throwCapColl->SetRelativeScale3D(FVector(2));

	rotMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotate Movement"));
	proMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));

	rotMovement->RotationRate = FRotator(0, 700, 0);
	proMovement->InitialSpeed = 2500;
	proMovement->MaxSpeed = 3000;
	proMovement->ProjectileGravityScale = 0.1f;




}

// Called when the game starts or when spawned
void AMarioThrowingCap::BeginPlay()
{
	Super::BeginPlay();

	//AMarioRealRecentCharacter* 
	pChar = Cast<AMarioRealRecentCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	// 1-2. ��ȯ���� player ���͸� player ������ �ִ´�.
	playerVar = FindPlayer_BP();
	punchCapVar = FindPunchCap_BP();



}

// Called every frame
void AMarioThrowingCap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	bool result = throwCapColl->IsOverlappingActor(punchCapVar);
	UE_LOG(LogTemp, Warning, TEXT("Overlap: %s"), result ? *FString("True") : *FString("False"));

	// punchCapVar->cupaHatCollision->IsOverlappingActor(playerVar->spawnedCap
	if (throwCapColl->IsOverlappingActor(punchCapVar)) {
		proMovement->StopMovementImmediately();

		
	}
	else {
		FTimerHandle cupaHatRotateHandler;

		GetWorldTimerManager().SetTimer(cupaHatRotateHandler, punchCapVar, &AMarioPunchingCap::CupaHatRotate, 0.2f, false);	// false : 1����, true : ����
		proMovement->StopMovementImmediately();
	}


}

void AMarioThrowingCap::ReturnToPlayer()
{

	FLatentActionInfo Info;
	//Info.CallbackTarget = this;
	//Info.Linkage = 0;
	//Info.ExecutionFunction = FName("MoveComponentToFunction");

	FVector targetRelativeLoc = pChar->GetMesh()->GetComponentLocation();
	FRotator targetRelativeRot = pChar->GetMesh()->GetComponentRotation();


	UKismetSystemLibrary::MoveComponentTo(defaultSceneRoot, targetRelativeLoc, targetRelativeRot, false, false, 0.2, false, EMoveComponentAction::Type::Move, Info);

	pChar->skmComp->SetVisibility(true);

	pChar->isOnMario = true;

	Destroy();


}

AMarioRealRecentCharacter* AMarioThrowingCap::FindPlayer_BP()
{
	// 1. �÷��̾��� ���� ���� ��ġ�� ã�´�.
	// 1-1. ���� ���嵥���Ϳ��� AMarioRealRecentCharacter Ŭ������ �� ��� ���͵��� ã�´�.
	TArray<AActor*> players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMarioRealRecentCharacter::StaticClass(), players);

	if (players.Num() > 0) {
		return Cast<AMarioRealRecentCharacter>(players[0]);
	}
	else {
		return nullptr;
	}
}

AMarioPunchingCap* AMarioThrowingCap::FindPunchCap_BP()
{
	TArray<AActor*> punchCaps;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMarioPunchingCap::StaticClass(), punchCaps);

	if (punchCaps.Num() > 0) {
		return Cast<AMarioPunchingCap>(punchCaps[0]);
	}
	else {
		return nullptr;
	}

}

