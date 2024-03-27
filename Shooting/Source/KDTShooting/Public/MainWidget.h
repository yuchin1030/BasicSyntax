// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.generated.h"

/**
 * 
 */
UCLASS()
class KDTSHOOTING_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))	// 메타지정자를 해줘야 실제 위젯과 연결됨
	class UTextBlock* text_currentPoint;	// 변수 이름이 에디터 상의 변수 이름이랑 똑같아야 에러 안 남

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))
	class UTextBlock* text_currentPointText;

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))
	class UTextBlock* text_bestPoint;

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidgetAnim), Transient)	// meta=(BindWidgetAnim)로 지정 시에는 반드시 Transient를 넣어줘야 함.
	class UWidgetAnimation* anim_currentScore;

	void ShowCuurentPointText(bool bShow);
	
};
