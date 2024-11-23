#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModOperationTrackerParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModOperationTrackerParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverallOperationPercentageLabelText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QueuedOperationNumberLabelText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpeedLabelText;
    
    FModioCommonModOperationTrackerParamsSettings();
};

