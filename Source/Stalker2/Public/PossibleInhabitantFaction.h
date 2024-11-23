#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "SpawnSettingsPerPlayerRank.h"
#include "PossibleInhabitantFaction.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPossibleInhabitantFaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSelector Faction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnSettingsPerPlayerRank SpawnSettingsPerPlayerRanks[4];
    
    FPossibleInhabitantFaction();
};

