#pragma once
#include "CoreMinimal.h"
#include "CinematicSubtitleData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICSUBTITLETRACKS_API FCinematicSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhraseSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpeakerSID;
    
    FCinematicSubtitleData();
};

