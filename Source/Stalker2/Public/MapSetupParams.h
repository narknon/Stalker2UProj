#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapSetupParams.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AMapSetupParams : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLightingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableReflectionManager;
    
    AMapSetupParams(const FObjectInitializer& ObjectInitializer);

};

