#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthLoadingParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonEmailAuthLoadingParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CancelButtonText;
    
    FModioCommonEmailAuthLoadingParamsSettings();
};

