#pragma once
#include "CoreMinimal.h"
#include "MeshesData.h"
#include "MeshCategory.generated.h"

USTRUCT(BlueprintType)
struct FMeshCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshesData> MeshesData;
    
    STALKER2_API FMeshCategory();
};

