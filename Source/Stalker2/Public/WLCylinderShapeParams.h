#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WLCylinderShapeParams.generated.h"

USTRUCT(BlueprintType)
struct FWLCylinderShapeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZMax;
    
    STALKER2_API FWLCylinderShapeParams();
};

