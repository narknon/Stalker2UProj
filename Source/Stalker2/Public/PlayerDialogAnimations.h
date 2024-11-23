#pragma once
#include "CoreMinimal.h"
#include "EDialogAnimationType.h"
#include "PlayerDialogAnimations.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPlayerDialogAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDialogAnimationType, UAnimSequenceBase*> DialogAnimations;
    
    STALKER2_API FPlayerDialogAnimations();
};

