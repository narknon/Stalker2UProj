#pragma once
#include "CoreMinimal.h"
#include "SoftAnimWeighted.h"
#include "AnimSequenceWeightedArray.generated.h"

USTRUCT(BlueprintType)
struct FAnimSequenceWeightedArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftAnimWeighted> Animations;
    
    STALKER2_API FAnimSequenceWeightedArray();
};

