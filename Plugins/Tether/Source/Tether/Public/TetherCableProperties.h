#pragma once
#include "CoreMinimal.h"
#include "BasicMeshProperties.h"
#include "CustomMeshProperties.h"
#include "ECableMeshGenerationType.h"
#include "TetherCableSimulationOptions.h"
#include "TetherCableProperties.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct TETHER_API FTetherCableProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherCableSimulationOptions SimulationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECableMeshGenerationType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicMeshProperties BasicMeshProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomMeshProperties CustomMeshProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    FTetherCableProperties();
};

