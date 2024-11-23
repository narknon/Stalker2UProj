#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GSCLocalPlayer.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Game)
class UGSCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> DLCNameToBitFlag;
    
public:
    UGSCLocalPlayer();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XImportSaves();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XFinishLoginProcess(const bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XFileToClipboard();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExportSaves();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XClipboardToFile();
    
};

