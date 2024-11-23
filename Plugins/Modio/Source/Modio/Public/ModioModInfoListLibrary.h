#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioModInfo.h"
#include "ModioModInfoList.h"
#include "ModioPagedResult.h"
#include "ModioModInfoListLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModInfoListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModInfoListLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
    
};

