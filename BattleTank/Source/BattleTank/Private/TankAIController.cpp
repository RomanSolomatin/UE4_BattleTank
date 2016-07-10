// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	auto ControlledTank = Cast<ATank>(GetPawn());
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (PlayerTank)
	{
		// TODO Move towards the player
		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		// Fire if ready
		ControlledTank->Fire();
	}
}