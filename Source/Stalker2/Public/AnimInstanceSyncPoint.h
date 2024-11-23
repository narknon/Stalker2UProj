#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSectionTemplateDecorator -FallbackName=MovieSceneSectionTemplateDecorator
#include "AnimInstanceSyncPoint.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceSyncPoint : public UAnimInstance, public IMovieSceneSectionTemplateDecorator {
    GENERATED_BODY()
public:
    UAnimInstanceSyncPoint();


    // Fix for true pure virtual functions not being implemented
};

