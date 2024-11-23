#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ContextualActionEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UContextualActionEffect : public UObject {
    GENERATED_BODY()
public:
    UContextualActionEffect();

};

