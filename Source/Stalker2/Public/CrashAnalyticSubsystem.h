#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CrashAnalyticSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCrashAnalyticSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCrashAnalyticSubsystem();

};

