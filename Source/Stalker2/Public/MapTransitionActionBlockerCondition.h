#pragma once
#include "CoreMinimal.h"
#include "ActionBlockerConditionBase.h"
#include "MapTransitionActionBlockerCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UMapTransitionActionBlockerCondition : public UActionBlockerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockMapTransition;
    
    UMapTransitionActionBlockerCondition();

};

