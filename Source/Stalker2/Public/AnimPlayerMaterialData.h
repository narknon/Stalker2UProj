#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerMaterialData.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FoliageCollectionAsset;
    
    FAnimPlayerMaterialData();
};

