#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonAuthParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonAuthParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SubmitInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TermsInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrivacyInputAction;
    
    FModioCommonAuthParamsSettings();
};

