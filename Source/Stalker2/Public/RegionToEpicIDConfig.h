#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERegion.h"
#include "RegionToEpicIDConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=LevelBookmarks)
class STALKER2_API URegionToEpicIDConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERegion, int32> RegionToEpicMap;
    
    URegionToEpicIDConfig();

};

