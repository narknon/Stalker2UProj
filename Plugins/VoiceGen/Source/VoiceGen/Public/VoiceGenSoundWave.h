#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundWave.h"
#include "VoiceGenParams.h"
#include "VoiceGenSoundWave.generated.h"

class UVoiceGenActor;

UCLASS(Blueprintable, EditInlineNew)
class VOICEGEN_API UVoiceGenSoundWave : public USoundWave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoiceGenActor* RequestedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceGenParams CachedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedText;
    
public:
    UVoiceGenSoundWave();

};

