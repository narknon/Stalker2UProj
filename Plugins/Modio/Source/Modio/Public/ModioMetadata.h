#pragma once
#include "CoreMinimal.h"
#include "ModioMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FModioMetadata();
};

