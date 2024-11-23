#pragma once
#include "CoreMinimal.h"
#include "Engine/PlatformSettings.h"
#include "GameInputPlatformSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class GAMEINPUTBASE_API UGameInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessController;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessRawInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialDevicesRequireExplicitDeviceConfiguration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessGamepad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessKeyboard;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessMouse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessRacingWheel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RacingWheelDeadzone;
    
    UGameInputPlatformSettings();

};

