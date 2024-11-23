#pragma once
#include "CoreMinimal.h"
#include "ModioModDependency.h"
#include "ModioPagedResult.h"
#include "ModioModDependencyList.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModDependencyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioPagedResult PagedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModioModDependency> InternalList;
    
    FModioModDependencyList();
};

