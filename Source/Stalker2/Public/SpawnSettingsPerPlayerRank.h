#pragma once
#include "CoreMinimal.h"
#include "ERank.h"
#include "SpawnSettingsPerArchetype.h"
#include "SpawnSettingsPerPlayerRank.generated.h"

USTRUCT(BlueprintType)
struct FSpawnSettingsPerPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERank PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnQuantityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnQuantityRespawnTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnQuantityRespawnTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WipeRespawnTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSettingsPerArchetype> SpawnSettingsPerArchetypes;
    
    STALKER2_API FSpawnSettingsPerPlayerRank();
};

