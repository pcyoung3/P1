// Copyright Epic Games, Inc. All Rights Reserved.


#include "P1GameMode.h"

AP1GameMode::AP1GameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_P1Player"));
	if (PlayerPawnBPClass.Class != NULL)
		DefaultPawnClass = PlayerPawnBPClass.Class;
}
