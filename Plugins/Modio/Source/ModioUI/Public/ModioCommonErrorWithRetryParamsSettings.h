#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonErrorWithRetryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonErrorWithRetryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RetryButtonTextLabel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RetryInputAction;
    
    FModioCommonErrorWithRetryParamsSettings();
};

