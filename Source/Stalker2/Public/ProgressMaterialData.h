#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ProgressMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FProgressMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    STALKER2_API FProgressMaterialData();
};

