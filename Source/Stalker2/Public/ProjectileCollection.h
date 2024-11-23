#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "ProjectileCollection.generated.h"

class AProjectile;

USTRUCT(BlueprintType)
struct STALKER2_API FProjectileCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AProjectile*> Projectiles;
    
public:
    FProjectileCollection();
};

