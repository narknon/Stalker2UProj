#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "OverlapVolumeEffect.generated.h"

USTRUCT(BlueprintType)
struct FOverlapVolumeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID EffectPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AddOnBeginOverlap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RemoveOnEndOverlap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnorePlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreAI: 1;
    
    STALKER2_API FOverlapVolumeEffect();
};

