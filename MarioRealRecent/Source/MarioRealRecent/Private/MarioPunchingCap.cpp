// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioPunchingCap.h"
#include <Components/SceneComponent.h>
#include <Components/BoxComponent.h>
#include <Components/SkeletalMeshComponent.h>
#include <Components/InterpToMovementComponent.h>


AMarioPunchingCap::AMarioPunchingCap()
{
	PrimaryActorTick.bCanEverTick = true;

	cupaHatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("capCollision"));
	cupaHatCollision->SetRelativeScale3D(FVector(2.5f));
	SetRootComponent(cupaHatCollision);

	cupaHat = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("cupaHat"));
	cupaHat->SetRelativeScale3D(FVector(0.12f));
	cupaHat->SetRelativeLocation(FVector(0,0,-16));
	cupaHat->SetupAttachment(cupaHatCollision);

	interpMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("interpMovement"));

}

void AMarioPunchingCap::BeginPlay()
{
	Super::BeginPlay();
	

}

void AMarioPunchingCap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMarioPunchingCap::cupaHatRotate()
{
}

