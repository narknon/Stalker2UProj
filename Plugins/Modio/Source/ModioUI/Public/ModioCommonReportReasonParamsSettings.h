#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportReasonParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportReasonParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProceedButtonText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CancelButtonText;
    
    FModioCommonReportReasonParamsSettings();
};

