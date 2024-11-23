#pragma once
#include "CoreMinimal.h"
#include "ModioHeaderImage.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioHeaderImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Original;
    
    FModioHeaderImage();
};

