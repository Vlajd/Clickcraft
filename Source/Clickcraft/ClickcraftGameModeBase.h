// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ClickcraftGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CLICKCRAFT_API AClickcraftGameModeBase : public AGameMode
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable) void SetSavedDir(FString input);
   	UFUNCTION(BlueprintCallable) TArray<FString> GetFilenames();
private:
   	FString dir;
};
