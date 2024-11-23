#pragma once
#include "CoreMinimal.h"
#include "MontageSection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMontageSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FMontageSection();
};

