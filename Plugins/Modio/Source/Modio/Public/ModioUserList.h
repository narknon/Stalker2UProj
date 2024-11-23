#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
#include "ModioUser.h"
#include "ModioUserList.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioUserList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioPagedResult PagedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModioUser> InternalList;
    
    FModioUserList();
};

