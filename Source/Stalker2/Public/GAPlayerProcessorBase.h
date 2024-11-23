#pragma once
#include "CoreMinimal.h"
#include "GAPlayerProcessorInterface.h"
#include "GAPlayerProcessorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UGAPlayerProcessorBase : public UGAPlayerProcessorInterface {
    GENERATED_BODY()
public:
    UGAPlayerProcessorBase();

};

