#pragma once
#include "CoreMinimal.h"
#include "StreamingDistanceOverrideVolumeState.generated.h"

class AStreamingDistanceOverridingVolume;

USTRUCT(BlueprintType)
struct FStreamingDistanceOverrideVolumeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStreamingDistanceOverridingVolume* Volume;
    
    STALKER2_API FStreamingDistanceOverrideVolumeState();
};

