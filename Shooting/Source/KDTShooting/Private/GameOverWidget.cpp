// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverWidget.h" 
#include <Components/Button.h>
#include <Kismet/GameplayStatics.h>
#include "ShootingGameModeBase.h"

// 생성 후 처음 실행되는 라이프 사이클 함수(= BeginPlay)
void UGameOverWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// 재시작 버튼의 클릭 이벤트에 RestartGame 함수를 연결한다.
	btn_restart->OnClicked.AddDynamic(this, &UGameOverWidget::RestartGame);

	// 종료 버튼의 클릭 이벤트에 QuitGame 함수를 연결한다.
	btn_quit->OnClicked.AddDynamic(this, &UGameOverWidget::QuitGame);

	// 계속하기 버튼의 클릭 이벤트에 ContinueGame 함수를 연결한다.
	btn_continue->OnClicked.AddDynamic(this, &UGameOverWidget::ContinueGame);
}

void UGameOverWidget::RestartGame()
{
	// 재시작을 한다.(레벨을 다시 연다)
	UGameplayStatics::OpenLevel(GetWorld(), FName("ShootingMap"));
}

void UGameOverWidget::QuitGame()
{
	// 어플리케이션을 종료한다.
	// UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Type::Quit, true);	// 블루프린트용
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("Quit");
}

void UGameOverWidget::ContinueGame()
{
	AShootingGameModeBase* gm = Cast<AShootingGameModeBase>(GetWorld()->GetAuthGameMode());
	gm->HideGameOverUI();
}


