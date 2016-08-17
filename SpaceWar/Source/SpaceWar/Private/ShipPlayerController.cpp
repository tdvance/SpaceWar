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
	AimTowardCrosshair(DeltaSeconds);
}

void AShipPlayerController::AimTowardCrosshair(float DeltaSeconds) {
	if (!GetControlledShip()) {
		return;
	}

	FVector AimDirectionVector;
	//find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	FVector2D ScreenLocation = FVector2D(ViewportSizeX*CrosshairXLocation, ViewportSizeY*CrosshairYLocation);
	FVector CameraLocation;
	DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraLocation, AimDirectionVector);
	FRotator AimDirection = AimDirectionVector.Rotation();
	FRotator CurrentDirection = GetControlledShip()->GetActorForwardVector().Rotation();
	FRotator DeltaRotation = AimDirection - CurrentDirection;
	if (FMath::Abs(DeltaRotation.Yaw) >= 180) {
		DeltaRotation.Yaw = -DeltaRotation.Yaw;
	}
	float mamount = DeltaSeconds*MaxDegPerSec;
	DeltaRotation.Yaw = FMath::Clamp(DeltaRotation.Yaw, -mamount, mamount);
	DeltaRotation.Pitch = FMath::Clamp(DeltaRotation.Pitch, -mamount, mamount);
	DeltaRotation.Roll = FMath::Clamp(DeltaRotation.Roll, -mamount, mamount);

	GetControlledShip()->AddActorWorldRotation(DeltaRotation);
	UE_LOG(LogTemp, Warning, TEXT("Ship: %s  AimDirection: %s  CurrentDirection: %s  Diff: %s"), *GetControlledShip()->GetName(), *AimDirection.ToString(), *CurrentDirection.ToString(), *DeltaRotation.ToString());


}
