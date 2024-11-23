#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "IAudioLinkBlueprintInterface.h"
#include "WwiseAudioLinkComponent.generated.h"

class UAudioComponent;
class USoundBase;
class UWwiseAudioLinkSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWwiseAudioLinkComponent : public UAkComponent, public IAudioLinkBlueprintInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWwiseAudioLinkSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopLink() override PURE_VIRTUAL(StopLink,);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkSound(USoundBase* NewSound) override PURE_VIRTUAL(SetLinkSound,);
    
    UFUNCTION(BlueprintCallable)
    void PlayLink(float StartTime) override PURE_VIRTUAL(PlayLink,);
    
    UFUNCTION(BlueprintCallable)
    bool IsLinkPlaying() const override PURE_VIRTUAL(IsLinkPlaying, return false;);
    
};

