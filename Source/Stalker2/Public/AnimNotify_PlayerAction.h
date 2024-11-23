#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EActionType.h"
#include "EPlayerActionResult.h"
#include "EPlayerTriggerState.h"
#include "AnimNotify_PlayerAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayerAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerActionResult PlayerActionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType PlayerActionType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerTriggerState PlayerTriggerToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType PlayerActionTypeToOverride;
    
    UAnimNotify_PlayerAction();

};

