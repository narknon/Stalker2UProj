#pragma once
#include "CoreMinimal.h"
#include "WeightedFacialAnimation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FWeightedFacialAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    STALKER2_API FWeightedFacialAnimation();
};

