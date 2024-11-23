#pragma once
#include "CoreMinimal.h"
#include "ModioOtherUrl.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioOtherUrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FModioOtherUrl();
};

