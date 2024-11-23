#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkMacAdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkMacInitializationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AKAUDIO_API UAkMacInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkMacAdvancedInitializationSettings AdvancedSettings;
    
    UAkMacInitializationSettings();

    UFUNCTION(BlueprintCallable)
    void MigrateMultiCoreRendering(bool NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

