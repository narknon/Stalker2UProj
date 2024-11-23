#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RengeSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRengeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WarningColor;
    
    FRengeSettings();
};

