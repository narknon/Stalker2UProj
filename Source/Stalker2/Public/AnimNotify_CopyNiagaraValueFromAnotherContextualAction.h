#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "NiagaraValueCopyFromTo.h"
#include "AnimNotify_CopyNiagaraValueFromAnotherContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_CopyNiagaraValueFromAnotherContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraValueCopyFromTo CopyFromTo;
    
public:
    UAnimNotify_CopyNiagaraValueFromAnotherContextualAction();

};

