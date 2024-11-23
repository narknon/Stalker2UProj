#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "DynamicObstacleAvoidanceManager.generated.h"

UCLASS(Blueprintable)
class UDynamicObstacleAvoidanceManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UDynamicObstacleAvoidanceManager();

};

