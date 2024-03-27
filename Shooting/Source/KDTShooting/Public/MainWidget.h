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
	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))	// ��Ÿ�����ڸ� ����� ���� ������ �����
	class UTextBlock* text_currentPoint;	// ���� �̸��� ������ ���� ���� �̸��̶� �Ȱ��ƾ� ���� �� ��

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))
	class UTextBlock* text_currentPointText;

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidget))
	class UTextBlock* text_bestPoint;

	UPROPERTY(EditAnywhere, Category="My Settings", meta=(BindWidgetAnim), Transient)	// meta=(BindWidgetAnim)�� ���� �ÿ��� �ݵ�� Transient�� �־���� ��.
	class UWidgetAnimation* anim_currentScore;

	void ShowCuurentPointText(bool bShow);
	
};
