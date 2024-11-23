#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimPlayerDetectorData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerDetectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDetectorInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DetectorSkeletal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponSwingData SwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponInertiaData InertiaData;
    
    FAnimPlayerDetectorData();
};

