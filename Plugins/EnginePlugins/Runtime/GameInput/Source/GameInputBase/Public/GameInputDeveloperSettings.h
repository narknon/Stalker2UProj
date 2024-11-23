#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/PlatformSettings.h"
#include "GameInputDeviceConfiguration.h"
#include "GameInputDeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class GAMEINPUTBASE_API UGameInputDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformSettings PlatformSpecificSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotProcessDuplicateCapabilitiesForSingleUser;
    
    UGameInputDeveloperSettings();

};

