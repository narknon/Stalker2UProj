#pragma once
#include "CoreMinimal.h"
#include "ERawDeviceReportTranslationBehavior.h"
#include "GameInputRawDeviceReportData.generated.h"

USTRUCT(BlueprintType)
struct GAMEINPUTBASE_API FGameInputRawDeviceReportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERawDeviceReportTranslationBehavior TranslationBehavior;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AnalogDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> ButtonBitMaskMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LowerBitAxisIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HigherBitAxisIndex;
    
    FGameInputRawDeviceReportData();
};

