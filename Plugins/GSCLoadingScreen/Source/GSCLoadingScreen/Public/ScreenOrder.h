#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESplashScreenType.h"
#include "ScreenOrder.generated.h"

USTRUCT(BlueprintType)
struct GSCLOADINGSCREEN_API FScreenOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplashScreenType ScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Image;
    
    FScreenOrder();
};

