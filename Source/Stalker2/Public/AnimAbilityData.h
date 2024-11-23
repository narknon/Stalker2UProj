#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetAlphaYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetAlphaPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* Offset;
    
    FAnimAbilityData();
};

