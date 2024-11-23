#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICKEYFRAMETRACKS_API UMovieSceneKeyFrameEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicKeyFrameData Data;
    
    UMovieSceneKeyFrameEventSection();

};

