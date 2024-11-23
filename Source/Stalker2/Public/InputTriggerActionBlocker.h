#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "InputTriggerActionBlocker.generated.h"

class UActionBlockerConditionBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UInputTriggerActionBlocker : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionBlockerConditionBase* Condition;
    
public:
    UInputTriggerActionBlocker();

};

