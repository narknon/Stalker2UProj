#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonFilteredModListParams.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonFilteredModListParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PreviousPageLabel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NextPageLabel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentPageTextFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TotalPagesTextFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TotalModsTextFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TotalSingleModTextFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousPageInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextPageInputAction;
    
    FModioCommonFilteredModListParams();
};

