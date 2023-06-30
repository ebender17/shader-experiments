// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderExperimentsGameMode.h"
#include "ShaderExperimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderExperimentsGameMode::AShaderExperimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
