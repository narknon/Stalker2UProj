#pragma once
#include "CoreMinimal.h"
#include "InputProcessingUnit.h"
#include "AttachSelectorSelectUnselectIPU.generated.h"

class UInputTrigger;

UCLASS(Blueprintable)
class STALKER2_API UAttachSelectorSelectUnselectIPU : public UInputProcessingUnit {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputTrigger* TriggerWithBiggestTime;
    
public:
    UAttachSelectorSelectUnselectIPU();

};

