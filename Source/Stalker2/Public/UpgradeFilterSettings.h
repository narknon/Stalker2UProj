#pragma once
#include "CoreMinimal.h"
#include "EInventoryEquipmentSlot.h"
#include "UpgradeFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryEquipmentSlot Filter;
    
    STALKER2_API FUpgradeFilterSettings();
};

