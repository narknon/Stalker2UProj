#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_PreciseRootMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_PreciseRootMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTimeCompareTolerance;
    
    UAnimNotifyState_PreciseRootMotion();

};

