#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "PlayAnimationOnAttachedItemData.h"
#include "AnimNotify_PlayAnimationOnAttachedItemContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayAnimationOnAttachedItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayAnimationOnAttachedItemData> PlayAnimationOnAttachedItemData;
    
    UAnimNotify_PlayAnimationOnAttachedItemContextualAction();

};

