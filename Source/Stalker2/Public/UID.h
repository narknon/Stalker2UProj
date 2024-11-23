#pragma once
#include "CoreMinimal.h"
#include "UID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FUID {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UID;
    
public:
    FUID();
};

