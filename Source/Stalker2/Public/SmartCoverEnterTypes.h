#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "EAvailableCoverEnterTypes.h"
#include "SmartCoverEnterTypes.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverEnterTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverEnterTypes EnterType;
    
    STALKER2_API FSmartCoverEnterTypes();
};

