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
	
public:
	AShip* GetControlledShip() const;
	
	void BeginPlay() override;
};
