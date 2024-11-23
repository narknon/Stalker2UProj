#pragma once
#include "CoreMinimal.h"
#include "BasicMeshGenerationOptions.h"
#include "BasicMeshProperties.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FBasicMeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveSimplificationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicMeshGenerationOptions MeshGenerationOptions;
    
    FBasicMeshProperties();
};

