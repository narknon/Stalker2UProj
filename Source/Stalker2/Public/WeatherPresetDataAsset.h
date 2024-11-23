#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeatherState.h"
#include "WeatherPresetDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UWeatherPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherState WeatherState;
    
    UWeatherPresetDataAsset();

};

