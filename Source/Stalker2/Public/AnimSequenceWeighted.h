#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceWeighted.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimSequenceWeighted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    STALKER2_API FAnimSequenceWeighted();
};

