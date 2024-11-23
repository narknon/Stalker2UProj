#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverActionSide.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverActionSide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide Side;
    
    STALKER2_API FSmartCoverActionSide();
};

