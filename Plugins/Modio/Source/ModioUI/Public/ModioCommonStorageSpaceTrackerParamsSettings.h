#pragma once
#include "CoreMinimal.h"
#include "ModioCommonStorageSpaceTrackerParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonStorageSpaceTrackerParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UsedSpaceLabelText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FreeSpaceLabelText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TotalSpaceLabelText;
    
    FModioCommonStorageSpaceTrackerParamsSettings();
};

