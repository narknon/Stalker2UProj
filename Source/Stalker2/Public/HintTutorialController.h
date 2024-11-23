#pragma once
#include "CoreMinimal.h"
#include "HintControllerBase.h"
#include "HintTutorialController.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHintTutorialController : public UHintControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalHold;
    
public:
    UHintTutorialController();

};

