#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EDialogAnimationType.h"
#include "AnimNotify_LaunchDialogAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_LaunchDialogAnimation : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogAnimationType DialogAnimationType;
    
    UAnimNotify_LaunchDialogAnimation();

};

