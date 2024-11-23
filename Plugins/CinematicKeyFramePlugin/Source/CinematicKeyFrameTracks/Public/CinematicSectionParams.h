#pragma once
#include "CoreMinimal.h"
#include "CinematicSectionParams.generated.h"

class UMovieSceneSequencePlayer;

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FCinematicSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneSequencePlayer> SequencerPlayer;
    
    FCinematicSectionParams();
};

