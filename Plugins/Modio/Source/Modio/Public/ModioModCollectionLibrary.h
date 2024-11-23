#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioModState.h"
#include "ModioModCollectionEntry.h"
#include "ModioModID.h"
#include "ModioModInfo.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModCollectionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPath(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioModState GetModState(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModID GetId(const FModioModCollectionEntry& Entry);
    
};

