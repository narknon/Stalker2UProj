#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAIAnimationAction.h"
#include "AnimNotify_AIAnimationAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_AIAnimationAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAnimationAction AnimationAction;
    
    UAnimNotify_AIAnimationAction();

};

