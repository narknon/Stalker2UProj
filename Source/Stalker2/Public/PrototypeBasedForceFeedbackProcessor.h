#pragma once
#include "CoreMinimal.h"
#include "ERumbleType.h"
#include "ForceFeedbackProcessorBase.h"
#include "PrototypeBasedForceFeedbackProcessor.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPrototypeBasedForceFeedbackProcessor : public UForceFeedbackProcessorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DefaultFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UForceFeedbackEffect*> PrototypeToFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ERumbleType> PrototypeToRumble;
    
public:
    UPrototypeBasedForceFeedbackProcessor();

};

