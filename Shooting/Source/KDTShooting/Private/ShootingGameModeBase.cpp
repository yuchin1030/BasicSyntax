// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "MainWidget.h"
#include "GameOverWidget.h"
#include <Components/TextBlock.h>



void AShootingGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 위젯 파일이 할당되어 있다면, 그 위젯을 생성한다.
	if (mainWidget_BP != nullptr) { // 위젯 주인 : World
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget_BP);	// 인스턴스가 만들어짐

		// 위젯 파일이 제대로 생성되었다면, 위젯 인스턴스를 뷰포트에 추가한다.
		if (mainUI != nullptr) {
			mainUI->AddToViewport();

			// text_currentPoint 변수의 text 값을 0으로 초기화 해준다.
			mainUI->text_currentPoint->SetText(FText::FromString("0"));		// "0"도 자료형이 String 이기 때문에 Text형으로 변환해줘야함

			// 파일에 있는 최고 점수 값을 얻어서 bestPoint 변수에 넣는다.
			FString loadPoint; 
			FString fullPath = FPaths::ProjectContentDir() + FString("/Save/BestScore.txt");	 // 파일을 읽어올 경로
			FFileHelper::LoadFileToString(loadPoint, *fullPath);
			bestPoint = FCString::Atoi(*loadPoint);	// 문자열을 정수로 바꿔줌

			// bestPoint 변수의 값을 출력한다.

			// text_bestPoint 변수의 text 값을 출력한다.
			mainUI->text_bestPoint->SetText(FText::FromString(FString::Printf(TEXT("%d"), bestPoint)));
		}
	}

}

void AShootingGameModeBase::AddPoint(int32 count)
{
	// 현재 점수에서 count만큼을 누적한다.
	point += count;

	// 만일, 현재 점수가 기존의 최고 점수를 초과했다면
	if (point > bestPoint) {
	
		// 최고 점수를 현재 점수 값으로 갱신한다.
		bestPoint = point;

		// 갱신된 bestPoint 변수의 값을 위젯에 출력한다.
		mainUI->text_bestPoint->SetText(FText::FromString(FString::Printf(TEXT("%d"), bestPoint)));
	}

	// Main Widget의 text_currentPoint 변수의 text 항목 값에 현재 포인트 값을 넣는다.

	// 1. Main Widget을 찾아서 접근한다.(포인터 변수)
	if (mainUI != nullptr) {

		// 2. point 변수의 값을 FText 형태로 변환한다 (int32 -> FText)
		FString pointString = FString::Printf(TEXT("%d"), point);	// 먼저 int -> String 변환
		FText pointText = FText::FromString(pointString);			// 그 다음, String -> FText로 변환

		// 3. 찾은 위젯의 text_currentPoint 변수의 멤버 변수인 text 항목에 접근한다.
		mainUI->text_currentPoint->SetText(pointText);
	}

	// 위젯 애니메이션을 실행한다.
	mainUI->PlayAnimationForward(mainUI->anim_currentScore);	// 정방향 플레이 (역방향일경우 PlayAnimationReverse)

}

int32 AShootingGameModeBase::GetCurrentPoint()
{
	return point;
}

int32 AShootingGameModeBase::GetBestPoint()
{
	return bestPoint;
}

// 게임 오버 UI를 화면에 그리는 함수
void AShootingGameModeBase::ShowGameOverUI()
{
	if (gameOverWidget_BP != nullptr) {
		gameOverUI = CreateWidget<UGameOverWidget>(GetWorld(), gameOverWidget_BP);	// 인스턴스가 만들어짐

		if (gameOverUI != nullptr) {

			// 게임 오버 UI를 화면에 그린다.
			gameOverUI->AddToViewport();

			// 마우스 커서를 화면에 보이게 처리한다.
			GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);

			// 메인 UI는 화면에서 제거한다.
			// mainUI->RemoveFromParent();

			// 메인 UI의 점수 표시를 보이지 않게 숨겨놓는다.
			mainUI->ShowCuurentPointText(false);

			// 게임을 일시 정지 상태로 놓는다.
			// 월드의 프레임 시간 배율을 0으로 바꾼다.
			GetWorldSettings()->SetTimeDilation(0); // 0 : pause 상태, 1 : 정상 속도
		}
	}
}

void AShootingGameModeBase::HideGameOverUI()
{

	// 월드의 시간 배율을 1배속으로 변경한다.
	GetWorldSettings()->SetTimeDilation(1);

	// 마우스 커서를 안보이게 한다.
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);

	// 게임오버 위젯을 제거한다.
	gameOverUI->RemoveFromParent();

	// 메인 UI 위젯을 다시 생성한다.
	// mainUI->AddToViewport();

	// 메인 UI의 현재 점수를 다시 화면에 보이게 한다.
	mainUI->ShowCuurentPointText(true);

	
}

void AShootingGameModeBase::SaveBestScore()
{
	// 최고 점수를 파일(.txt)로 저장한다.
	FString savePoint = FString::Printf(TEXT("%d"), bestPoint);	// 정수를 문자열로 변환
	FString fullPath = FPaths::ProjectContentDir() + FString("/Save/BestScore.txt");	// FPaths::ProjectContentDir() : 내 프로젝트의 Content파일까지의 실제 경로를 자동으로 가져와줌.
																						// FString("/Save/BestScore.txt") : Content 이후의 내가 파일을 저장시킬 상대 경로
	FFileHelper::SaveStringToFile(savePoint, *fullPath);
}



