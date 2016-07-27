// Copyright 2016 Todd D. Vance

#include "SpaceWar.h"
#include "Ship.h"
#include "ShipPlayerController.h"


AShip* AShipPlayerController::GetControlledShip() const {
	return Cast<AShip>(GetPawn());
}

void AShipPlayerController::BeginPlay() {
	Super::BeginPlay();
}

void AShipPlayerController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	AimTowardCrosshair();
}

void AShipPlayerController::AimTowardCrosshair() {
	if (!GetControlledShip()) {
		return;
	}

}
