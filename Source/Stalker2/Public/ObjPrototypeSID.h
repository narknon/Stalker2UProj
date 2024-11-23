#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "ObjPrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FObjPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID ObjSID;
    
    FObjPrototypeSID();
};

