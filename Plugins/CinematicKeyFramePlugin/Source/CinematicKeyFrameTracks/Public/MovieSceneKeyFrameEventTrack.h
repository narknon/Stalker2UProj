#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneKeyFrameEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class CINEMATICKEYFRAMETRACKS_API UMovieSceneKeyFrameEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneKeyFrameEventTrack();


    // Fix for true pure virtual functions not being implemented
};

