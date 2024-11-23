#pragma once
#include "CoreMinimal.h"
#include "SplinePointMeshData.generated.h"

class UPrefabAsset;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSplinePointMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StrandStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SeparatorStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabAsset* PrefabStrandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabAsset* PrefabSeparatorMesh;
    
    STALKER2_API FSplinePointMeshData();
};

