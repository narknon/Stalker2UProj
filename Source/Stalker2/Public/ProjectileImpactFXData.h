#pragma once
#include "CoreMinimal.h"
#include "ProjectileImpactFXData.generated.h"

class AAgent;

USTRUCT(BlueprintType)
struct FProjectileImpactFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAgent* HitAgent;
    
    STALKER2_API FProjectileImpactFXData();
};

