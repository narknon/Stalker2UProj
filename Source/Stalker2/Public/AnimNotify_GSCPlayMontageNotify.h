#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_GSCPlayMontageNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_GSCPlayMontageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyTag;
    
public:
    UAnimNotify_GSCPlayMontageNotify();

};

