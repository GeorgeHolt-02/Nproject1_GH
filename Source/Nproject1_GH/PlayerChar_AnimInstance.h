// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerChar_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UPlayerChar_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:	

	virtual void NativeInitializeAnimation() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	float MovementInput;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	bool bInAir;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	bool bHasJumped;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	bool bHasFired;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	APawn* Pawn;

	UFUNCTION(BlueprintCallable, Category = "Animation")
	void UpdateAnimationProperties();
	
};
