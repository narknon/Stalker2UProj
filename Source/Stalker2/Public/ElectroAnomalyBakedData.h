#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElectroAnomalyBakedData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FElectroAnomalyBakedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TraceStartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TraceUpVectors;
    
    FElectroAnomalyBakedData();
};

