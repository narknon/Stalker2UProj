#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FollowNPCSubsystem.generated.h"

UCLASS(Blueprintable)
class UFollowNPCSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UFollowNPCSubsystem();

};

