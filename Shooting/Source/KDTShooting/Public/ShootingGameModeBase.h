// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class KDTSHOOTING_API AShootingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	int32 GetCurrentPoint();
	int32 GetBestPoint();

	UPROPERTY(EditAnywhere, Category="My Settings")
	TSubclassOf<class UMainWidget> mainWidget_BP;

	UPROPERTY(EditAnywhere, Category="My Settings")
	TSubclassOf<class UGameOverWidget> gameOverWidget_BP;	// 블루 프린트 파일을 할당하기 위한 변수

	void AddPoint(int32 count);
	void ShowGameOverUI();
	void HideGameOverUI();
	void SaveBestScore();


protected:
	virtual void BeginPlay() override;


private:
	int32 point = 0;
	int32 bestPoint = 0;

	class UMainWidget* mainUI;
	class UGameOverWidget* gameOverUI;	// 인스턴스를 할당받을 변수
};
