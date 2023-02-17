// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_GameOver.h"

#include "ButtonWidget.h"
#include "TextWidget.h"
#include "Widget_Initial.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void UWidget_GameOver::NativeConstruct()
{
	Super::NativeConstruct();

	TopTenScores.Empty();
	
	UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(SaveGameBP));
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex);
	
	UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex));
	if(LoadGameInstance)
	{
		for (int i = 0; i < 10; i++)
		{
			TopTenScores.Add(LoadGameInstance->TopTenScores[i]);
		}
		
	}

	if(RecordTextRef)
	{
		for(int i = RecordBox->GetChildrenCount(); i < 10; i++)
		{
			UUserWidget* RecordWidget = CreateWidget(this, RecordTextRef);
			RecordBox->AddChildToVerticalBox(RecordWidget);
			UTextWidget* RecordText = Cast<UTextWidget>(RecordWidget);
			RecordText->SetData((i+1), TopTenScores[i].Name, TopTenScores[i].Score);
		}
	}

	if(InitialRef)
	{
		for(int i = InitialsBox->GetChildrenCount(); i < 3; i++)
		{
			UUserWidget* InitialWidget = CreateWidget(this, InitialRef);
			InitialsBox->AddChildToHorizontalBox(InitialWidget);
			//UWidget_Initial* Initial = Cast<UWidget_Initial>(Initial);
		}
	}

	//UGameplayStatics::SetGamePaused(GetWorld(), true);
					
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
					
	if(PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Valid"));
		//GameOverWidget->SetOwningPlayer(PlayerController);
		PlayerController->SetShowMouseCursor(true);
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(PlayerController);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Valid"));
	}
}

void UWidget_GameOver::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	
}