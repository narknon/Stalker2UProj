#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "FactionSelectorArray.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FFactionSelectorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionSelector> Factions;
    
    FFactionSelectorArray();
};

