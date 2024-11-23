#pragma once
#include "CoreMinimal.h"
#include "EVoiceGenVoice.h"
#include "VoiceGenParams.generated.h"

USTRUCT(BlueprintType)
struct VOICEGEN_API FVoiceGenParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoiceGenVoice Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeakingRate;
    
    FVoiceGenParams();
};

