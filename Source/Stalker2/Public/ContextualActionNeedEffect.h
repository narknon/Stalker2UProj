#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "ContextualActionNeedEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UContextualActionNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextualActionNeeds ContextualActionNeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeValuePerSelector;
    
    UContextualActionNeedEffect();

};

