#pragma once
#include "CoreMinimal.h"
#include "SoftAnimWeighted.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSoftAnimWeighted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> Animation;
    
    STALKER2_API FSoftAnimWeighted();
};

