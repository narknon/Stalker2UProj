#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ENotifyTriggerType.h"
#include "AnimNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class UAnimNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyTriggerType NotifyTriggerType;
    
public:
    UAnimNotifyBase();

};

