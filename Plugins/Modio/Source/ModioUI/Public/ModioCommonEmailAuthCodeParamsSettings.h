#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthCodeParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonEmailAuthCodeParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ValidationText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BackButtonText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubmitButtonText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CancelButtonText;
    
    FModioCommonEmailAuthCodeParamsSettings();
};

