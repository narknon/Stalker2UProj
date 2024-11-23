#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMarkerType.h"
#include "MarkerTypeSettings.h"
#include "MarkerSettings.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class STALKER2_API UMarkerSettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarkerType, FMarkerTypeSettings> MarkerTypeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CompassMarkerVisibilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerTypeSettings MarkerSettingsDefaultObject;
    
public:
    UMarkerSettings();

};

