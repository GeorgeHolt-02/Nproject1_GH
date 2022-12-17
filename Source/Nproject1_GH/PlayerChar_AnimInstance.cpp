// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar_AnimInstance.h"
#include "PlayerChar.h"

void UPlayerChar_AnimInstance::NativeInitializeAnimation()
{
	if(Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
}

void UPlayerChar_AnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	if (Pawn)
	{
		APlayerChar* MyPlayerChar = Cast<APlayerChar>(Pawn);
		if (MyPlayerChar)
		{
			MovementInput = (FMath::Abs(MyPlayerChar->Anim_MovementInput.X) + FMath::Abs(MyPlayerChar->Anim_MovementInput.Y));
			bInAir = MyPlayerChar->Anim_bInAir;
			bHasFired = MyPlayerChar->Anim_bHasFired;
			bHasJumped = MyPlayerChar->Anim_bHasJumped;
		}
	}
}
