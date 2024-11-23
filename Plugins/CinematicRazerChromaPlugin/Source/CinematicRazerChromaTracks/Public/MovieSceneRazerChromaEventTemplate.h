#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "CinematicRazerChromaData.h"
#include "MovieSceneRazerChromaEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICRAZERCHROMATRACKS_API FMovieSceneRazerChromaEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicRazerChromaData Data;
    
    FMovieSceneRazerChromaEventTemplate();
};

