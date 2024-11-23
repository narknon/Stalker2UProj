#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ContextualActionSubsystem.generated.h"

UCLASS(Blueprintable)
class UContextualActionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UContextualActionSubsystem();

};

