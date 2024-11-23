#pragma once
#include "CoreMinimal.h"
#include "GAPlayerProcessorInterface.h"
#include "GATutorialEventProcessor.generated.h"

UCLASS(Blueprintable)
class UGATutorialEventProcessor : public UGAPlayerProcessorInterface {
    GENERATED_BODY()
public:
    UGATutorialEventProcessor();

};

