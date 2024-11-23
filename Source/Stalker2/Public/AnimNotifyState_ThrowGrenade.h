#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GSCPlayMontageNotifyWindow.h"
#include "AnimNotifyState_ThrowGrenade.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_ThrowGrenade : public UAnimNotify_GSCPlayMontageNotifyWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    UAnimNotifyState_ThrowGrenade();

};

