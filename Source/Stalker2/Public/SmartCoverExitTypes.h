#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "EAvailableCoverExitTypes.h"
#include "SmartCoverExitTypes.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverExitTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverExitTypes ExitType;
    
    STALKER2_API FSmartCoverExitTypes();
};

