#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "AddNeedEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UAddNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextualActionNeeds ContextualActionNeedForAdd;
    
    UAddNeedEffect();

};

