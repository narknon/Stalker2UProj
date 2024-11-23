#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_SetWeaponEnabled.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_SetWeaponEnabled : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UAnimNotify_SetWeaponEnabled();

};

