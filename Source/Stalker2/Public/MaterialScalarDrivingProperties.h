#pragma once
#include "CoreMinimal.h"
#include "MaterialScalarDrivingProperties.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FMaterialScalarDrivingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollectionToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    STALKER2_API FMaterialScalarDrivingProperties();
};

