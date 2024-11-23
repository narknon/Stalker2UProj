#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElectroAnomalyBakedDataFloat.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FElectroAnomalyBakedDataFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceStartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceUpVectors;
    
    FElectroAnomalyBakedDataFloat();
};

