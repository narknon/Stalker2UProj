#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "CinematicHapticFeedbackData.h"
#include "MovieSceneHapticFeedbackEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICHAPTICFEEDBACKTRACKS_API UMovieSceneHapticFeedbackEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicHapticFeedbackData Data;
    
    UMovieSceneHapticFeedbackEventSection();

};

