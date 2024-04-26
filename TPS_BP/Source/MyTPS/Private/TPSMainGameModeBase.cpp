// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSMainGameModeBase.h"
#include "MainWidget.h"


void ATPSMainGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// ���� UI�� ȭ�鿡 ����Ѵ�.
	if (mainWidget_bp != nullptr)
	{
		mainWidget_inst = CreateWidget<UMainWidget>(GetWorld(), mainWidget_bp);

		if (mainWidget_inst)
		{
			mainWidget_inst->AddToViewport(0);
		}
	}
}

void ATPSMainGameModeBase::RespawnPlayer(AController* NewPlayer, APawn* previousPawn)
{
	// ���� ������ �÷��̾� ��Ʈ�ѷ��� �����.
	NewPlayer->UnPossess();

	// ���� ��� ���̽��� �ִ� ����� �Լ��� �����Ѵ�.
	//RestartPlayer(NewPlayer);
	FTransform spawnTrans;
	spawnTrans.SetLocation(FVector(-218, -1201, 91));
	spawnTrans.SetRotation(FQuat::Identity);

	RestartPlayerAtTransform(NewPlayer, spawnTrans);

	// ������ ���� �����Ѵ�.
	previousPawn->Destroy();
}



