#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ForceReloadingEnd.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_ForceReloadingEnd : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnloading;
    
    UAnimNotifyState_ForceReloadingEnd();

};

