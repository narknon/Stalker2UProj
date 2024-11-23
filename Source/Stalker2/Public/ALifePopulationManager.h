#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ALifePopulationManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UALifePopulationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UALifePopulationManager();

};

