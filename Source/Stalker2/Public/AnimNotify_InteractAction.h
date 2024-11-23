#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimInteractAction.h"
#include "AnimNotify_InteractAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_InteractAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimInteractAction InteractAction;
    
public:
    UAnimNotify_InteractAction();

};

