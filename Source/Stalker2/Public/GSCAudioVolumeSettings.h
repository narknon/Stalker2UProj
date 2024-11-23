#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GSCAudioVolumeSettings.generated.h"

class UAkRtpc;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API UGSCAudioVolumeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbientTimerDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNPCinVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> AmbientVolumeRTPC;
    
    UGSCAudioVolumeSettings();

};

