// Copyright 2016 Todd D. Vance

#pragma once

#include "AIController.h"
#include "ShipAIController.generated.h"

class AShip;

/**
 * 
 */
UCLASS()
class SPACEWAR_API AShipAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	AShip* GetControlledShip() const;

	AShip* GetPlayerShip() const;

	void BeginPlay() override;

	
};
