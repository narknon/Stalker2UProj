#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "PhysicalManagerCollection.h"
#include "PhysicsObjectCollection.h"
#include "ProjectileCollection.h"
#include "PostUpdateTickAggregationManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPostUpdateTickAggregationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProjectileCollection ProjectilesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhysicalManagerCollection PhysicalManagerCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhysicsObjectCollection PhysicsObjectCollection;
    
public:
    UPostUpdateTickAggregationManager();

};

