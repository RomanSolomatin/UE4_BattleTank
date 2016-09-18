// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AIController.h"
#include "TankAIController.generated.h"

class UTankAimingComponent;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000;

private:
	void Tick(float DeltaSeconds) override;

	void SetPawn(APawn* Pawn) override;
	
	UTankAimingComponent* AimingComponent = nullptr;

	UFUNCTION()
	void OnTankDeath();
};
