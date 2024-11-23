#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "CinematicSubtitleData.h"
#include "MovieSceneSubtitleEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICSUBTITLETRACKS_API UMovieSceneSubtitleEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicSubtitleData Data;
    
    UMovieSceneSubtitleEventSection();

};

