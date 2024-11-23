#pragma once
#include "CoreMinimal.h"
#include "FireTypeDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFireTypeDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayTextSid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayTexture;
    
    STALKER2_API FFireTypeDisplayInfo();
};

