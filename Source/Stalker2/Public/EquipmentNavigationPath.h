#pragma once
#include "CoreMinimal.h"
#include "EInventoryEquipmentSlot.h"
#include "EquipmentNavigationPath.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentNavigationPath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryEquipmentSlot TargetSlot;
    
    STALKER2_API FEquipmentNavigationPath();
};

