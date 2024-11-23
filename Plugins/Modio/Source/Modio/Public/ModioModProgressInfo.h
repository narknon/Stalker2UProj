#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    FModioModProgressInfo();
};

