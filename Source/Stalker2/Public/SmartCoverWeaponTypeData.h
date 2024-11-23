#pragma once
#include "CoreMinimal.h"
#include "ESmartCoverType.h"
#include "SmartCoverPerCoverTypeData.h"
#include "SmartCoverWeaponTypeData.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverWeaponTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESmartCoverType, FSmartCoverPerCoverTypeData> AnimationsData;
    
    STALKER2_API FSmartCoverWeaponTypeData();
};

