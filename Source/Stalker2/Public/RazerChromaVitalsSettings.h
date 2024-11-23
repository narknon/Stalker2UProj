#pragma once
#include "CoreMinimal.h"
#include "RazerChromaEvent.h"
#include "RazerChromaVitalsSettings.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaVitalsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRazerChromaEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIfHigher;
    
    STALKER2_API FRazerChromaVitalsSettings();
};

