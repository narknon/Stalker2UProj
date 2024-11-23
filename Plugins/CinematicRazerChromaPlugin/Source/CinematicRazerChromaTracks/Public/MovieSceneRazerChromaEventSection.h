#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "CinematicRazerChromaData.h"
#include "MovieSceneRazerChromaEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICRAZERCHROMATRACKS_API UMovieSceneRazerChromaEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicRazerChromaData Data;
    
    UMovieSceneRazerChromaEventSection();

};

