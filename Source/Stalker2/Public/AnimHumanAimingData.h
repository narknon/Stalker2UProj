#pragma once
#include "CoreMinimal.h"
#include "AnimHumanAimingData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanAimingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    FAnimHumanAimingData();
};

