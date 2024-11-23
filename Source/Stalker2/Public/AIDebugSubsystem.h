#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AIDebugSubsystem.generated.h"

UCLASS(Blueprintable)
class UAIDebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAIDebugSubsystem();

};

