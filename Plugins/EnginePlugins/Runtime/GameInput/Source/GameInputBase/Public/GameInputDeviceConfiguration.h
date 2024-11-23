#pragma once
#include "CoreMinimal.h"
#include "GameInputControllerAxisData.h"
#include "GameInputDeviceIdentifier.h"
#include "GameInputRawDeviceReportData.h"
#include "GameInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct GAMEINPUTBASE_API FGameInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInputDeviceIdentifier DeviceIdentifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHardwareDeviceIdString;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverriddenHardwareDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessControllerButtons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessControllerSwitchState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessControllerAxis;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FName> ControllerButtonMappingData;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FGameInputControllerAxisData> ControllerAxisMappingData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessRawReportData;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RawReportReadingId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGameInputRawDeviceReportData> RawReportMappingData;
    
    FGameInputDeviceConfiguration();
};

