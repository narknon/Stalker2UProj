#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CinematicHapticFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICHAPTICFEEDBACKTRACKS_API FCinematicHapticFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceFeedbackTag;
    
    FCinematicHapticFeedbackData();
};

