#pragma once
#include "CoreMinimal.h"
#include "ModifyVFXValue.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FModifyVFXValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValueToBeModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueModifierPerSec;
    
    FModifyVFXValue();
};

