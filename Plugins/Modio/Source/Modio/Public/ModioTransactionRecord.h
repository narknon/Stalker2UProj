#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioUnsigned64.h"
#include "ModioTransactionRecord.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioTransactionRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID AssociatedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 UpdatedUserWalletBalance;
    
    FModioTransactionRecord();
};

