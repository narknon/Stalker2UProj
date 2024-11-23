#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "CinematicHapticFeedbackData.h"
#include "MovieSceneHapticFeedbackEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICHAPTICFEEDBACKTRACKS_API FMovieSceneHapticFeedbackEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicHapticFeedbackData Data;
    
    FMovieSceneHapticFeedbackEventTemplate();
};

