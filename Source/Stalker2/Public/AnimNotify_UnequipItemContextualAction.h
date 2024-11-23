#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EMainHandEquipmentType.h"
#include "AnimNotify_UnequipItemContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_UnequipItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHandEquipmentType SlotToUnequip;
    
public:
    UAnimNotify_UnequipItemContextualAction();

};

