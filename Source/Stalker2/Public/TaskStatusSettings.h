#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TaskStatusSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTaskStatusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Collor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    STALKER2_API FTaskStatusSettings();
};

