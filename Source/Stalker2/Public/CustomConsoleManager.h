#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManager : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBaseConsoleManager*> PersonalConsoleManagers;
    
    UCustomConsoleManager();

    UFUNCTION(BlueprintCallable, Exec)
    void XRunEngineCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExecuteAdditionalScript(const FString& ScriptKeyName);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteScripts(const TArray<FString>& ScriptArray);
    
};

