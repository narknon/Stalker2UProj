#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERumbleType.h"
#include "ForceFeedbackParams.h"
#include "ForceFeedbackProcessorBase.generated.h"

class UForceFeedbackEffect;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UForceFeedbackProcessorBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceFeedbackParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERumbleType RumbleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERumbleType DefaultRumbleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CurrentFeedback;
    
public:
    UForceFeedbackProcessorBase();

};

