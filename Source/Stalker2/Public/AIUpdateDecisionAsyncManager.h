#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "AIUpdateDecisionAsyncManager.generated.h"

UCLASS(Blueprintable)
class UAIUpdateDecisionAsyncManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UAIUpdateDecisionAsyncManager();

};

