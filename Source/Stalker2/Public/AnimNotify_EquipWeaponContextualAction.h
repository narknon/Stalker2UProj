#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ContextualActionNotifyWeaponEquipData.h"
#include "AnimNotify_EquipWeaponContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotify_EquipWeaponContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContextualActionNotifyWeaponEquipData> ItemsToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceChangeItemInHand;
    
public:
    UAnimNotify_EquipWeaponContextualAction();

};

