#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScreenData.generated.h"

USTRUCT(BlueprintType)
struct GSCLOADINGSCREEN_API FScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Image;
    
    FScreenData();
};

