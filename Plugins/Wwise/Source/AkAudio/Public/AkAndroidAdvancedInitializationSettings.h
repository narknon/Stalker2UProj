#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkAndroidAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AudioAPI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RoundFrameSizeToHardwareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLowLatencyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerboseSink;
    
    AKAUDIO_API FAkAndroidAdvancedInitializationSettings();
};

