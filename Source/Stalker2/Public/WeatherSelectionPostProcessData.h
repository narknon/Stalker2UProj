#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "WeatherSelectionPostProcessData.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UWeatherSelectionPostProcessData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    UWeatherSelectionPostProcessData();

};

