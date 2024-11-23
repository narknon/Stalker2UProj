#pragma once
#include "CoreMinimal.h"
#include "ModioApiKey.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioApiKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ApiKey;
    
public:
    FModioApiKey();
};

