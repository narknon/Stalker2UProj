#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDP.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerDP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDP();

    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashStackOverflow(int32 Counter) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashReturnIfFalse() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashRandomAddress() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashNullptrRT() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashNullptr() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashLambda() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestCrashCheckFalse() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPrintLocalizedTextByKey(const FString& StringKey) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XInitializeLocalizationManager() const;
    
};

