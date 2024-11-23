#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackProcessorBase.h"
#include "SimpleForceFeedbackProcessor.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USimpleForceFeedbackProcessor : public UForceFeedbackProcessorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* Feedback;
    
    USimpleForceFeedbackProcessor();

};

