#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "DiamondAnomaly.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ADiamondAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
public:
    ADiamondAnomaly(const FObjectInitializer& ObjectInitializer);

};

