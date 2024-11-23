#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EStashActionType.h"
#include "AnimNotify_StashSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_StashSound : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStashActionType StashActionType;
    
public:
    UAnimNotify_StashSound();

};

