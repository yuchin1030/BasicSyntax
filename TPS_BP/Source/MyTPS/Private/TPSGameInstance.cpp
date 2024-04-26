// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSGameInstance.h"
#include "TPSPlayer.h"


FPlayerStatus UTPSGameInstance::GetPlayerTableData(const FString& rowName)
{
	// ������ Parsing(�м�) �ϱ�
	FString errorText;
	FPlayerStatus* playerStatusParse = dt_playerStatus->FindRow<FPlayerStatus>(FName(rowName), errorText);

	return *playerStatusParse;
}
