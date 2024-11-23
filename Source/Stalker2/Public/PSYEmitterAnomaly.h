#pragma once
#include "CoreMinimal.h"
#include "PSYAnomaly.h"
#include "PSYEmitterAnomaly.generated.h"

UCLASS(Blueprintable)
class STALKER2_API APSYEmitterAnomaly : public APSYAnomaly {
    GENERATED_BODY()
public:
    APSYEmitterAnomaly(const FObjectInitializer& ObjectInitializer);

};

