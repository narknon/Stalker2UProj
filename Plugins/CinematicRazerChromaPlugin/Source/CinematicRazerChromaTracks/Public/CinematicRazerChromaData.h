#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CinematicRazerChromaData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICRAZERCHROMATRACKS_API FCinematicRazerChromaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuous;
    
    FCinematicRazerChromaData();
};

