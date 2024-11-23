#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverTransitionSides.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverTransitionSides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide ResultSide;
    
    STALKER2_API FSmartCoverTransitionSides();
};

