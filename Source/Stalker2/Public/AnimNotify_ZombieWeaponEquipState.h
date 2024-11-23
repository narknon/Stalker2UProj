#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_ZombieWeaponEquipState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ZombieWeaponEquipState : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipped;
    
    UAnimNotify_ZombieWeaponEquipState();

};

