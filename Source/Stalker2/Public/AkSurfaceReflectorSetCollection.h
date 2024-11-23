#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AkSurfaceReflectorSetCollection.generated.h"

class UAkSurfaceReflectorSetComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAkSurfaceReflectorSetCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkSurfaceReflectorSetComponent*> SurfaceReflectorSetComponents;
    
public:
    FAkSurfaceReflectorSetCollection();
};

