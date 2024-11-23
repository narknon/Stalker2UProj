#pragma once
#include "CoreMinimal.h"
#include "EDialogAnimationCategory.h"
#include "EDialogAnimationType.h"
#include "DialogAnimationType.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FDialogAnimationType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogAnimationType Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogAnimationCategory DialogAnimationCategory;
    
    FDialogAnimationType();
};

