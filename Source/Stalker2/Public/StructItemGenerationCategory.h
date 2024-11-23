#pragma once
#include "CoreMinimal.h"
#include "EItemGenerationCategory.h"
#include "StructItemGeneratorSingleElement.h"
#include "StructItemGenerationCategory.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FStructItemGenerationCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemGenerationCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructItemGeneratorSingleElement> PossibleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSameCategoryGeneration;
    
    FStructItemGenerationCategory();
};

