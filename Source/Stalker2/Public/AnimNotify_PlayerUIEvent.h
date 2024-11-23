#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EPlayerUIEvent.h"
#include "AnimNotify_PlayerUIEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayerUIEvent : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerUIEvent EventType;
    
public:
    UAnimNotify_PlayerUIEvent();

};

