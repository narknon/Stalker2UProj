#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CableMeshGenerationPointInfo.h"
#include "CableMeshGenerationPoint.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FCableMeshGenerationPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCableMeshGenerationPointInfo Info;
    
    FCableMeshGenerationPoint();
};

