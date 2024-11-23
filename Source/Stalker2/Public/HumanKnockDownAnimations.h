#pragma once
#include "CoreMinimal.h"
#include "HumanKnockDownAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHumanKnockDownAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* KnockDownInForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* KnockDownInBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* KnockDownInLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* KnockDownInRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* KnockDownOut;
    
    STALKER2_API FHumanKnockDownAnimations();
};

