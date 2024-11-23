#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_ForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ForceFeedback : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeedbackTag;
    
public:
    UAnimNotify_ForceFeedback();

};

