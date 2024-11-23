#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "BaseConsoleManager.generated.h"

UCLASS(Abstract, Blueprintable)
class UBaseConsoleManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UBaseConsoleManager();

};

