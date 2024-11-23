#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ClothSimulationManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UClothSimulationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UClothSimulationManager();

};

