#pragma once
#include "CoreMinimal.h"
#include "TetherSimulationInstanceResources.generated.h"

class UBodySetup;
class UWorld;

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationInstanceResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    FTetherSimulationInstanceResources();
};

