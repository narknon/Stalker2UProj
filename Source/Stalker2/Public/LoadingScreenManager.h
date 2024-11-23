#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenManager();

};

