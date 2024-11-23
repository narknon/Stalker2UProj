#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerUnfocusableTargetData.generated.h"

USTRUCT(BlueprintType)
struct FAnimPlayerUnfocusableTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetingUnfocusable;
    
    STALKER2_API FAnimPlayerUnfocusableTargetData();
};

