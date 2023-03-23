// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBlaster.h"

#include "PlayerChar.h"
#include "Engine/SkeletalMeshSocket.h"

// Sets default values
APlayerBlaster::APlayerBlaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void APlayerBlaster::BeginPlay()
{
	Super::BeginPlay();
	APlayerChar* MyChar = Cast<APlayerChar>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (MyChar)
	{
		const USkeletalMeshSocket* Socket = MyChar->PlayerMesh->GetSocketByName("BlasterSocket");
		if(Socket)
		{
			Socket->AttachActor(this, MyChar->PlayerMesh);
		}
	}
}

// Called every frame
void APlayerBlaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

