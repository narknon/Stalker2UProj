#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverActionWithSide.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSmartCoverActionWithSide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    STALKER2_API FSmartCoverActionWithSide();
};

