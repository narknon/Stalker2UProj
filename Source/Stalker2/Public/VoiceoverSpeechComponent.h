#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "SpeechComponent.h"
#include "VoiceoverSpeechComponent.generated.h"

class UAkCallbackInfo;
class UAkComponent;

UCLASS(Blueprintable)
class UVoiceoverSpeechComponent : public USpeechComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkVoiceoverSpeakerComponent;
    
public:
    UVoiceoverSpeechComponent();

private:
    UFUNCTION(BlueprintCallable)
    void OnAKEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

