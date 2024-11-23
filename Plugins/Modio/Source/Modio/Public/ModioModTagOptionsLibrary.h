#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioModTagInfo.h"
#include "ModioModTagOptions.h"
#include "ModioPagedResult.h"
#include "ModioModTagOptionsLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModTagOptionsLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
    
};

