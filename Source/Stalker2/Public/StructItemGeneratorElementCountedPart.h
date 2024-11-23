#pragma once
#include "CoreMinimal.h"
#include "StructItemGeneratorElementCountedPart.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FStructItemGeneratorElementCountedPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    FStructItemGeneratorElementCountedPart();
};

