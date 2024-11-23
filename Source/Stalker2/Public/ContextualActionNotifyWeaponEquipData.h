#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "PrototypeSID.h"
#include "ContextualActionNotifyWeaponEquipData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FContextualActionNotifyWeaponEquipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID ItemSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHandEquipmentType SlotToEquip;
    
    FContextualActionNotifyWeaponEquipData();
};

