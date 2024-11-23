#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "SpawnSettingsPerArchetype.generated.h"

USTRUCT(BlueprintType)
struct FSpawnSettingsPerArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    STALKER2_API FSpawnSettingsPerArchetype();
};

