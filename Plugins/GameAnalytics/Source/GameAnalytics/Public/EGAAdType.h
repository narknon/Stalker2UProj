#pragma once
#include "CoreMinimal.h"
#include "EGAAdType.generated.h"

UENUM(BlueprintType)
enum class EGAAdType : uint8 {
    undefined,
    video,
    rewardedvideo,
    playable,
    interstitial,
    offerwall,
    banner,
};

