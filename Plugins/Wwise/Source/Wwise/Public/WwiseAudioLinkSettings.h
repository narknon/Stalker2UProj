#pragma once
#include "CoreMinimal.h"
#include "AudioLinkSettingsAbstract.h"
#include "WwiseAudioLinkSettings.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=Game)
class WWISE_API UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StartEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClearBufferOnReceipt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProducerToConsumerBufferRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSilenceFillRatio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartEventResolved;
    
public:
    UWwiseAudioLinkSettings();

};

