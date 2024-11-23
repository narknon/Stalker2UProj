#pragma once
#include "CoreMinimal.h"
#include "GlobalVariable.h"
#include "ItemLock.h"
#include "LockStruct.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLock> LockedByItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGlobalVariable> LockedByGlobalVariables;
    
    FLockStruct();
};

