#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CableMeshGenerationPoint.h"
#include "CableMeshGenerationCurveDescription.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FCableMeshGenerationCurveDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCableMeshGenerationPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndTangent;
    
    FCableMeshGenerationCurveDescription();
};

