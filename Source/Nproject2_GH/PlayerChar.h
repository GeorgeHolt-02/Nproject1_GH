// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBlaster.h"
#include "PlayerShot.h"
#include "GameFramework/Pawn.h"
#include "PlayerChar.generated.h"

UCLASS()
class NPROJECT2_GH_API APlayerChar : public APawn
{
	GENERATED_BODY()
	
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Player camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* PlayerCamera;

	/** Arrow. Shows what direction the player is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UArrowComponent* Arrow;

public:
	// Sets default values for this pawn's properties
	APlayerChar();

	//** Player collision volume, root component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PlayerCollider;

	//** Base player transform, pseudo-root component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* PlayerTransform;

	//** Shot origin transform */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	USceneComponent* ShotTransform;
	
	//** Player visual/mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* PlayerMesh;

	//** Blaster mesh, to be attached to hand socket */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APlayerBlaster> BlasterMesh;
	
	/** Camera movement rate */
	//(left/right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	float BaseLookRightRate;

	//(up/down)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	/** Movement vectors */
	//forward/backward
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector ForwardVector;

	//left/right
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector RightVector;

	//up/down
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector UpVector;

	/** Rotation vectors and rotator variables */
	//pitch
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotation")
	FVector PitchVector;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotation")
	FRotator PitchRotator;

	//yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotation")
	FVector YawVector;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotation")
	FRotator YawRotator;

	//roll
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rotation")
	FVector RollVector;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rotation")
	FRotator RollRotator;

	//** Normal movement speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;

	//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Gravity;

	//** Terminal falling speed - the speed that the player caps at when falling */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float TerminalFallSpeed;

	/** What the player's Z-speed was on the previous frame */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float OriginalZSpeed;

	//** Jump force - the amount to set our Z-speed to when the player presses jump */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	float JumpForce;

	//** Boolean that represents whether or not the player has just jumped */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Jumping")
	bool bJustJumped;

	//** Maximum number of times the player can jump before landing */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Jumping")
	int MaxJumps;

	//** Number of times the player has jumped before landing on the ground */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Jumping")
	int Jumps;

	//** Projectile Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	TSubclassOf<APlayerShot> ShotBP;
	
	//** The amount of distance a projectile can travel before it despawns */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	float MaxProjTravelDistance;

	//** The maximum number of projectiles that can be in the scene at once */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	int MaxShots;
	
	//** The number of fired projectiles currently in the scene */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	TArray<AActor*> FoundShots;

	/** The name of the projectile currently being checked when determining
	whether or not the player can fire again */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	FName ShotTag;

	/** Maximum player health */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	float MaxHealth;

	/** Current player health */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	float CurrentHealth;

	/** Invulnerability time after taking certain hits */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxInvulnTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float InvulnTime;

	/** Whether or not a given sweep is done purely for positioning purposes */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPositioningSweep;
	
#pragma region ANIMATION VARIABLES

	//Ground movement input
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	FVector2D Anim_MovementInput;
	
	//Whether or not the shoot button has been pressed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	bool Anim_bHasFired;

	//Whether or not the player has just jumped
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	bool Anim_bHasJumped;

	//Whether or not the player is currently in mid-air
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	bool Anim_bInAir;

#pragma endregion

	//Current game instance
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UMyGameInstance* CurrentGameInstance;

	//Score multiplier (max, current and how much to change by, respectively)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ScoreMultiplier_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float ScoreMultiplier_Current;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ScoreMultiplier_ChangeBy;
	
	//Score multiplier meter (required for next multiplier increase, current and how much to increase by, respectively)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float MultiplierMeter_NeededForIncrease;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MultiplierMeter_Current;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MultiplierMeter_IncreaseBy;

	//Time to pause score multiplier meter decrementing for
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MeterDecrementPauseTime;

	//Whether or not to reset the meter to 0 or meter max
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bResetMeter;

	/* Multiplier meter speed coefficient (what we multiply delta time and the score multiplier by to define
	the meter's depletion speed) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MeterSpeedCoeff;

	// Game over widget reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UWidget_GameOver> GameOverRef;

	//"High score" (Score needed to reach leaderboards, or player personal best)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int HighScore;

	//HUD
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UWidget_PlayerHUD> PlayerHUDref;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UWidget_PlayerHUD* PlayerHUD;
	
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Movement input functions */
	//(forwards/backwards)
	void MoveForward(float Value);

	//(left/right)
	void MoveRight(float Value);

	//** Jumping functions */
	//initial jump
	void Jump();

	//halting the jump
	void StopJumping();

	//Shooting function
	void Shoot();

	//Returns whether or not the player can shoot
	bool bCanShoot();

	//Destroys player if health is at 0 or lower (or if the player is out of bounds)
	void PlayerDeath();
	
	//Destroys projectiles that are far-away enough from the player
	void ShotCleanup();

	//Damages player based on i-frames. Called by other classes
	UFUNCTION(BlueprintCallable)
	void TakeHeavyDamage(float damage);

	//Subtracts from InvulnTimer over time if greater than 0
	void UpdateInvulnTimer(float deltaTime);

	/** Camera movement functions */
	//(left/right)
	void LookRightAtRate(float Rate);

	//(up/down)
	void LookUpAtRate(float Rate);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Called to update forward and right vectors based on basic ground movement controls
	void PlayerGroundMovement(float DeltaTime);

	// Called to cause ground collision effects
	void PlayerGroundCollision(float DeltaTime);

	// Called to cause ceiling collision effects
	void PlayerCeilingCollision(float DeltaTime);

	// Called to cap the player's falling speed
	void PlayerFallSpeedCap();
	
	// Called to cause the player to constantly move downwards and gradually gain speed while airborne
	void PlayerGravity(float DeltaTime);

	// Called to update the multiplier/meter 
	void UpdateMultiplier(float DeltaTime);

	// Called on a hit
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& HitResult);
	
	// Restarts the level when the player dies
	UFUNCTION()
	void OnDeath(AActor* DestroyedActor);

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns PlayerCamera subobject **/
	FORCEINLINE class UCameraComponent* GetPlayerCamera() const { return PlayerCamera; }
};
