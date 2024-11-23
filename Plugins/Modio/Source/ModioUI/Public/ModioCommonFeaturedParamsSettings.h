#pragma once
#include "CoreMinimal.h"
#include "ModioModCategoryParams.h"
#include "ModioCommonFeaturedParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonFeaturedParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModioModCategoryParams> CategoryParams;
    
    FModioCommonFeaturedParamsSettings();
};

