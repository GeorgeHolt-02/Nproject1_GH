// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UCLASS()
class NPROJECT1_GH_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

	//* Enemy collision volume */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UBoxComponent* EnemyCollider;

	//* Number of points to award the player upon death */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int PointsToAward;
	
	//* Enemy health (maximum and current, respectively) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Health_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Health_Current;

	//* Whether or not this enemy kills the player upon contact */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bKillOnContact;

	//* Time to be invulnerable for upon spawn (maximum and current, respectively) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float InvulnTime_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float InvulnTime_Current;

	//* Time between visibility flashes (maximum and current, respectively) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float FlashTime_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float FlashTime_Current;

	//* Whether or not to flash via the flashing function */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bShouldFlash;
	
	//* Whether or not to stop flashing via the invuln period */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bStopFlashing;

	/** Player character reference */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class APlayerChar* Player;

	/** Game instance reference */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UMyGameInstance* CurrentGameInstance;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Starts the invulnerability period upon spawn
	virtual void StartInvulnPeriod();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Enables collision on the first frame
	void EnableCollision();

	// The loop for the starting invulnerability period
	virtual void InvulnPeriod(float DeltaTime);

	// The visibility flashing that occurs during invulnerability/upon hit
	virtual void VisibilityFlashing(float DeltaTime);

	// The main behaviour loop for this enemy
	virtual void MainBehaviour(float DeltaTime);

	// Function for taking damage
	virtual void DamageFunction(float Damage);

	// Function for death
	virtual void Death();

	// Called on the beginning of an overlap
	UFUNCTION()
	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	//Adds points upon death
	UFUNCTION()
	void OnDeath(AActor* DestroyedActor);
};
