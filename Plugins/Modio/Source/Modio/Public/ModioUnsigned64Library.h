#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioUnsigned64.h"
#include "ModioUnsigned64Library.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioUnsigned64Library : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioUnsigned64Library();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 Subtract(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Percentage_Unsigned64(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 MakeFromComponents(const int32& High, const int32& Low);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DivideToFloat(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DivideFloat(const FModioUnsigned64& LHS, const float RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 Divide(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_FModioUnsigned64ToFloat(const FModioUnsigned64& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakToComponents(const FModioUnsigned64& In, int32& High, int32& Low);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 Add(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    
};

