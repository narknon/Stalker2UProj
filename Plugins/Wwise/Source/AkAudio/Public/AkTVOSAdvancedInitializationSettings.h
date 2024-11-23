#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkTVOSAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkTVOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerboseSystemOutput;
    
    AKAUDIO_API FAkTVOSAdvancedInitializationSettings();
};

