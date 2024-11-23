#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "DetectorToggleFlashlightAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDetectorToggleFlashlightAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMainHandEquipmentType, UAnimMontage*> ToggleFlashlight;
    
    STALKER2_API FDetectorToggleFlashlightAnimations();
};

