#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimationType.h"
#include "AnimNotify_ClimbingActions.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ClimbingActions : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationType AnimationType;
    
    UAnimNotify_ClimbingActions();

};

