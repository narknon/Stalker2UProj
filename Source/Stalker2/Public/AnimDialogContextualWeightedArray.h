#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceWeightedArray.h"
#include "ELookAtOwnerState.h"
#include "AnimDialogContextualWeightedArray.generated.h"

USTRUCT(BlueprintType)
struct FAnimDialogContextualWeightedArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELookAtOwnerState, FAnimSequenceWeightedArray> DialogContextualAnimations;
    
    STALKER2_API FAnimDialogContextualWeightedArray();
};

