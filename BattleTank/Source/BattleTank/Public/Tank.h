// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward declarations
class AProjectile;
class UTankBarrel;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()


public:
	void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Fire();

private:
	// Sets default values for this pawn's properties
	ATank();

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 100000;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

	//TODO remove
	UTankBarrel* Barrel = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3.0f;

	double LastFireTime = 0;
};
