// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_GameOver.h"

#include "ButtonWidget.h"
#include "TextWidget.h"
#include "Widget_Initial.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

void UWidget_GameOver::NativeConstruct()
{
	Super::NativeConstruct();

	InitialIndex = 0;

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
		SelectedInitial = Cast<UWidget_Initial>(InitialsBox->GetAllChildren()[0]);
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

void UWidget_GameOver::InitializeInputComponent()
{
	if ( APlayerController* Controller = GetOwningPlayer() )
	{
		// Use the existing PC's input class, or fallback to the project default. We should use the existing class
		// instead of just the default one because if you have a plugin that has a PC with a different default input
		// class then this would fail
		UClass* InputClass = Controller->InputComponent ? Controller->InputComponent->GetClass() : UInputSettings::GetDefaultInputComponentClass();
		InputComponent = NewObject< UInputComponent >( this, InputClass, NAME_None, RF_Transient );

		check(InputComponent);

		InputComponent->BindAxis("NavX", this, &UWidget_GameOver::SelectInitial);
		
		InputComponent->bBlockInput = bStopAction;
		InputComponent->Priority = Priority;
		Controller->PushInputComponent( InputComponent );
	}
	else
	{
		//FMessageLog("PIE").Info(FText::Format(LOCTEXT("NoInputListeningWithoutPlayerController", "Unable to listen to input actions without a player controller in {0}."), FText::FromName(GetClass()->GetFName())));
	}

	
}

void UWidget_GameOver::SelectInitial(float Value)
{
	InitialIndex += 1 * FMath::Sign(Value);
	if(InitialIndex >= InitialsBox->GetChildrenCount())
	{
		InitialIndex = 0;
	}
	else if (InitialIndex < 0)
	{
		InitialIndex = (InitialsBox->GetChildrenCount() - 1);
	}
	if(SelectedInitial)
	{
		SelectedInitial->UpButton->Button->ColorAndOpacity = FLinearColor(FColor::Green);
		SelectedInitial->DownButton->Button->ColorAndOpacity = FLinearColor(FColor::Green);
	}
	
	SelectedInitial = Cast<UWidget_Initial>(InitialsBox->GetAllChildren()[InitialIndex]);
	if(SelectedInitial)
	{
		SelectedInitial->UpButton->Button->ColorAndOpacity = FLinearColor(FColor::Cyan);
		SelectedInitial->DownButton->Button->ColorAndOpacity = FLinearColor(FColor::Cyan);
	}
}

void UWidget_GameOver::CharCycle(float Value)
{
	
}
