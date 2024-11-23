#pragma once
#include "CoreMinimal.h"
#include "ModioImageWrapper.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioImageWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImagePath;
    
    FModioImageWrapper();
};

