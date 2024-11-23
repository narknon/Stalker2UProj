#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebugRestrictionSettings.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FDebugRestrictionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> InRestrictedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> OutRestrictedAreas;
    
    STALKER2_API FDebugRestrictionSettings();
};

