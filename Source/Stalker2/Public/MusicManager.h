#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "MusicManager.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable)
class STALKER2_API UMusicManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GameMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* MusicVolumeSlider;
    
public:
    UMusicManager();

};

