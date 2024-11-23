#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_BoundsScale.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_BoundsScale : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsScale;
    
    UAnimNotifyState_BoundsScale();

};

