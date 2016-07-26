// Copyright 2016 Todd D. Vance

#include "SpaceWar.h"
#include "Ship.h"
#include "ShipAIController.h"

AShip* AShipAIController::GetControlledShip() const {
	return Cast<AShip>(GetPawn());
}

AShip* AShipAIController::GetPlayerShip() const {
	return Cast<AShip>(GetWorld()->GetFirstPlayerController());
}


void AShipAIController::BeginPlay() {
	Super::BeginPlay();
}


