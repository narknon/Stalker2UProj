#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "RemoveNeedEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API URemoveNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextualActionNeeds ContextualActionNeedForRemove;
    
    URemoveNeedEffect();

};

