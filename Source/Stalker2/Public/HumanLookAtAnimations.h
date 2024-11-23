#pragma once
#include "CoreMinimal.h"
#include "HumanLookAtAnimations.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FHumanLookAtAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CoverStandBlindLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CoverCrouchBlindLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* CoverCrouchBlindTop;
    
    STALKER2_API FHumanLookAtAnimations();
};

