#pragma once
#include "CoreMinimal.h"
#include "ModSubsystemBase.h"
#include "GSCModIOSubsystem.generated.h"

class UModioSubsystem;
class UModioUISubsystem;
class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Game)
class UGSCModIOSubsystem : public UModSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ModBrowserClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ModBrowserLoadingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UModioSubsystem* ModioSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UModioUISubsystem* ModioUISubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ModBrowserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ModBrowserLoadingWidget;
    
    UGSCModIOSubsystem();

    UFUNCTION(BlueprintCallable)
    void HandleModBrowserClosed();
    
};

