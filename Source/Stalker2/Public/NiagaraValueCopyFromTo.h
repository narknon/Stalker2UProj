#pragma once
#include "CoreMinimal.h"
#include "NiagaraValueCopyFromTo.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FNiagaraValueCopyFromTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CopyFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CopyTo;
    
    FNiagaraValueCopyFromTo();
};

