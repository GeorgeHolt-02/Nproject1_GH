// Fill out your copyright notice in the Description page of Project Settings.


#include "MySaveGame.h"

UMySaveGame::UMySaveGame()
{
	const FRecord Record;
	TopTenScores.Init(Record, 10);

	SaveSlotName = FString("TestSaveSlot");
	UserIndex = 0;
	PlayerPB = NULL;
}
