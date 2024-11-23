#pragma once
#include "CoreMinimal.h"
#include "StrandSplineComponent.h"
#include "StrandStaticMeshComponent.h"
#include "StrandFinalData.generated.h"

USTRUCT(BlueprintType)
struct FStrandFinalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrandSplineComponent> SplineComponentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrandStaticMeshComponent> StaticMeshComponentsData;
    
    STALKER2_API FStrandFinalData();
};

