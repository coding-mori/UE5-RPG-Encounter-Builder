// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EncounterDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FEnemyArchetype
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Archetype")
    TSubclassOf<class AActor> EnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Archetype", meta = (ClampMin = "1"))
    int32 ThreatCost = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Archetype")
    FColor EditorVisualColor = FColor::Red;
};

// UDataAsset is the base class for serialised data files
UCLASS(BlueprintType)
class ENCOUNTERBUILDERRUNTIME_API UEncounterDataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Settings")
    FName EncounterName = "New Encounter";

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Settings", meta = (ClampMin = "0"))
    int32 MaxThreatBudget = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Encounter|Spawns")
    TArray<FEnemyArchetype> AvailableArchetypes;
};