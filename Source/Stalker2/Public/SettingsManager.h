#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "SettingsManager.generated.h"

class UAkEffectShareSet;
class UAkRtpc;

UCLASS(Blueprintable)
class STALKER2_API USettingsManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* MainVolumeRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* MusicVolumeRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* EffectsVolumeRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DialogueVolumeRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* MuteAllRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DisableCopyrightedMusicRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkEffectShareSet* FullAkEffectShareSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkEffectShareSet* MediumAkEffectShareSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkEffectShareSet* NarrowAkEffectShareSet;
    
public:
    USettingsManager();

};

