#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ProjectileSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UProjectileSubsystem : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UProjectileSubsystem();

};

