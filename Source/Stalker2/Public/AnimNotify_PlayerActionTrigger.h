#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EPlayerActionTriggerState.h"
#include "EPlayerTriggerState.h"
#include "AnimNotify_PlayerActionTrigger.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayerActionTrigger : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerActionTriggerState TriggerNewState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerTriggerState ActionTrigger;
    
    UAnimNotify_PlayerActionTrigger();

};

