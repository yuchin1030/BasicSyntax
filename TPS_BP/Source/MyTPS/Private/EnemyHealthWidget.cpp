// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyHealthWidget.h"
#include "Components/ProgressBar.h"


void UEnemyHealthWidget::SetHealthBar(float value, FLinearColor lowHealthColor)
{
	pb_healthBar->SetPercent(value);

	// ����, �÷��̾��� ���� ü���� 20% �̸��� ��� ü�¹��� fill ������ ��Ȳ������ ǥ���Ѵ�.
	if (value < 0.2f)
	{
		pb_healthBar->SetFillColorAndOpacity(lowHealthColor);
	}
}
