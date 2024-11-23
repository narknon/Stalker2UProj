#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FMovieSceneKeyFrameEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicKeyFrameData Data;
    
    FMovieSceneKeyFrameEventTemplate();
};

