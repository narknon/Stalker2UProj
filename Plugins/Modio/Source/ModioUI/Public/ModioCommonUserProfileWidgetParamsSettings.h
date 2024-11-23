#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonUserProfileWidgetParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonUserProfileWidgetParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProfileButtonLabel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ProfileInputAction;
    
    FModioCommonUserProfileWidgetParamsSettings();
};

