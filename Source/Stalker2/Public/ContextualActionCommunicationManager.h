#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ContextualActionCommunicationManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UContextualActionCommunicationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UContextualActionCommunicationManager();

};

