#pragma once
#include "CoreMinimal.h"
#include "DoubleLineSettings.generated.h"

USTRUCT(BlueprintType)
struct FDoubleLineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FindTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CorrectTag;
    
    STALKER2_API FDoubleLineSettings();
};

