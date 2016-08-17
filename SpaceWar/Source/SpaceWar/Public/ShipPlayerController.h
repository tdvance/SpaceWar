// Copyright 2016 Todd D. Vance

#pragma once

#include "GameFramework/PlayerController.h"
#include "ShipPlayerController.generated.h" //must be last include

class AShip;

/**
 * 
 */
UCLASS()
class SPACEWAR_API AShipPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.333;

	UPROPERTY(EditAnywhere)
	float MaxDegPerSec = 5.0;

	AShip* GetControlledShip() const;
	
	void BeginPlay() override;

	void Tick(float DeltaSeconds) override;

	void AimTowardCrosshair(float DeltaSeconds);

};
