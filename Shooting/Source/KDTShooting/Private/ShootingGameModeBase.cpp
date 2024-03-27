// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "MainWidget.h"
#include "GameOverWidget.h"
#include <Components/TextBlock.h>



void AShootingGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// ���� ������ �Ҵ�Ǿ� �ִٸ�, �� ������ �����Ѵ�.
	if (mainWidget_BP != nullptr) { // ���� ���� : World
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget_BP);	// �ν��Ͻ��� �������

		// ���� ������ ����� �����Ǿ��ٸ�, ���� �ν��Ͻ��� ����Ʈ�� �߰��Ѵ�.
		if (mainUI != nullptr) {
			mainUI->AddToViewport();

			// text_currentPoint ������ text ���� 0���� �ʱ�ȭ ���ش�.
			mainUI->text_currentPoint->SetText(FText::FromString("0"));		// "0"�� �ڷ����� String �̱� ������ Text������ ��ȯ�������

			// ���Ͽ� �ִ� �ְ� ���� ���� �� bestPoint ������ �ִ´�.
			FString loadPoint; 
			FString fullPath = FPaths::ProjectContentDir() + FString("/Save/BestScore.txt");	 // ������ �о�� ���
			FFileHelper::LoadFileToString(loadPoint, *fullPath);
			bestPoint = FCString::Atoi(*loadPoint);	// ���ڿ��� ������ �ٲ���

			// bestPoint ������ ���� ����Ѵ�.

			// text_bestPoint ������ text ���� ����Ѵ�.
			mainUI->text_bestPoint->SetText(FText::FromString(FString::Printf(TEXT("%d"), bestPoint)));
		}
	}

}

void AShootingGameModeBase::AddPoint(int32 count)
{
	// ���� �������� count��ŭ�� �����Ѵ�.
	point += count;

	// ����, ���� ������ ������ �ְ� ������ �ʰ��ߴٸ�
	if (point > bestPoint) {
	
		// �ְ� ������ ���� ���� ������ �����Ѵ�.
		bestPoint = point;

		// ���ŵ� bestPoint ������ ���� ������ ����Ѵ�.
		mainUI->text_bestPoint->SetText(FText::FromString(FString::Printf(TEXT("%d"), bestPoint)));
	}

	// Main Widget�� text_currentPoint ������ text �׸� ���� ���� ����Ʈ ���� �ִ´�.

	// 1. Main Widget�� ã�Ƽ� �����Ѵ�.(������ ����)
	if (mainUI != nullptr) {

		// 2. point ������ ���� FText ���·� ��ȯ�Ѵ� (int32 -> FText)
		FString pointString = FString::Printf(TEXT("%d"), point);	// ���� int -> String ��ȯ
		FText pointText = FText::FromString(pointString);			// �� ����, String -> FText�� ��ȯ

		// 3. ã�� ������ text_currentPoint ������ ��� ������ text �׸� �����Ѵ�.
		mainUI->text_currentPoint->SetText(pointText);
	}

	// ���� �ִϸ��̼��� �����Ѵ�.
	mainUI->PlayAnimationForward(mainUI->anim_currentScore);	// ������ �÷��� (�������ϰ�� PlayAnimationReverse)

}

int32 AShootingGameModeBase::GetCurrentPoint()
{
	return point;
}

int32 AShootingGameModeBase::GetBestPoint()
{
	return bestPoint;
}

// ���� ���� UI�� ȭ�鿡 �׸��� �Լ�
void AShootingGameModeBase::ShowGameOverUI()
{
	if (gameOverWidget_BP != nullptr) {
		gameOverUI = CreateWidget<UGameOverWidget>(GetWorld(), gameOverWidget_BP);	// �ν��Ͻ��� �������

		if (gameOverUI != nullptr) {

			// ���� ���� UI�� ȭ�鿡 �׸���.
			gameOverUI->AddToViewport();

			// ���콺 Ŀ���� ȭ�鿡 ���̰� ó���Ѵ�.
			GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);

			// ���� UI�� ȭ�鿡�� �����Ѵ�.
			// mainUI->RemoveFromParent();

			// ���� UI�� ���� ǥ�ø� ������ �ʰ� ���ܳ��´�.
			mainUI->ShowCuurentPointText(false);

			// ������ �Ͻ� ���� ���·� ���´�.
			// ������ ������ �ð� ������ 0���� �ٲ۴�.
			GetWorldSettings()->SetTimeDilation(0); // 0 : pause ����, 1 : ���� �ӵ�
		}
	}
}

void AShootingGameModeBase::HideGameOverUI()
{

	// ������ �ð� ������ 1������� �����Ѵ�.
	GetWorldSettings()->SetTimeDilation(1);

	// ���콺 Ŀ���� �Ⱥ��̰� �Ѵ�.
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);

	// ���ӿ��� ������ �����Ѵ�.
	gameOverUI->RemoveFromParent();

	// ���� UI ������ �ٽ� �����Ѵ�.
	// mainUI->AddToViewport();

	// ���� UI�� ���� ������ �ٽ� ȭ�鿡 ���̰� �Ѵ�.
	mainUI->ShowCuurentPointText(true);

	
}

void AShootingGameModeBase::SaveBestScore()
{
	// �ְ� ������ ����(.txt)�� �����Ѵ�.
	FString savePoint = FString::Printf(TEXT("%d"), bestPoint);	// ������ ���ڿ��� ��ȯ
	FString fullPath = FPaths::ProjectContentDir() + FString("/Save/BestScore.txt");	// FPaths::ProjectContentDir() : �� ������Ʈ�� Content���ϱ����� ���� ��θ� �ڵ����� ��������.
																						// FString("/Save/BestScore.txt") : Content ������ ���� ������ �����ų ��� ���
	FFileHelper::SaveStringToFile(savePoint, *fullPath);
}



