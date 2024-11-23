#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EDragDeadBodyState.h"
#include "AnimNotify_DragDeadBody.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_DragDeadBody : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragDeadBodyState DragDeadBodyState;
    
    UAnimNotify_DragDeadBody();

};

