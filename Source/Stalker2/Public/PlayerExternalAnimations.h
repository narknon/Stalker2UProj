#pragma once
#include "CoreMinimal.h"
#include "PlayerLeansAnimations.h"
#include "PlayerLocomotionAnimations.h"
#include "PlayerExternalAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerExternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLocomotionAnimations UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLocomotionAnimations LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LookVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLeansAnimations Leans;
    
    STALKER2_API FPlayerExternalAnimations();
};

