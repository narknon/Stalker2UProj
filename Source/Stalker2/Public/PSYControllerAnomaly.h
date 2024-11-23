#pragma once
#include "CoreMinimal.h"
#include "PSYAnomaly.h"
#include "PSYControllerAnomaly.generated.h"

UCLASS(Blueprintable)
class STALKER2_API APSYControllerAnomaly : public APSYAnomaly {
    GENERATED_BODY()
public:
    APSYControllerAnomaly(const FObjectInitializer& ObjectInitializer);

};

