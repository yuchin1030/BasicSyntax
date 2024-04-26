// Fill out your copyright notice in the Description page of Project Settings.


#include "MainWidget.h"
#include "Components/Image.h"


void UMainWidget::SetWeaponTexture(int32 index)
{
	// ����, �ε����� weaponTextures �迭�� �ε��� ���� �̳����...
	if (index >= 0 && index < weaponTextures.Num())
	{
		// UImage ������Ʈ�� Brush �Ӽ��� ������ �ؽ��ĸ� �Ҵ��Ѵ�.
		img_weapon->SetBrushFromTexture(weaponTextures[index]);
	}
}

void UMainWidget::SetSniperMode(bool modeOff)
{
	// �������� ��尡 off���...
	if (modeOff)
	{
		img_crosshair->SetVisibility(ESlateVisibility::Visible);
		img_zoom->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		img_crosshair->SetVisibility(ESlateVisibility::Hidden);
		img_zoom->SetVisibility(ESlateVisibility::Visible);
	}
}

void UMainWidget::ShowHitBorder(bool bShow)
{
	if (bShow)
	{
		img_hitBorder->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		img_hitBorder->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UMainWidget::PlayHitAnimation()
{
	StopAnimation(HitAnimation);
	PlayAnimationForward(HitAnimation);
}
