#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ALifePOISubsystem.generated.h"

UCLASS(Blueprintable)
class UALifePOISubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UALifePOISubsystem();

};

