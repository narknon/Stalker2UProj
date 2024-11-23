#pragma once
#include "CoreMinimal.h"
#include "PlayerLeansAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerLeansAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeanLeftIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeanLeftOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeanRightIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeanRightOut;
    
    STALKER2_API FPlayerLeansAnimations();
};

