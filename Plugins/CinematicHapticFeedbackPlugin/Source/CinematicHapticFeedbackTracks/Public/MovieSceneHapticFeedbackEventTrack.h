#pragma once
#include "CoreMinimal.h"
#include "MovieSceneKeyFrameEventTrack.h"
#include "MovieSceneHapticFeedbackEventTrack.generated.h"

UCLASS(Blueprintable)
class CINEMATICHAPTICFEEDBACKTRACKS_API UMovieSceneHapticFeedbackEventTrack : public UMovieSceneKeyFrameEventTrack {
    GENERATED_BODY()
public:
    UMovieSceneHapticFeedbackEventTrack();

};

