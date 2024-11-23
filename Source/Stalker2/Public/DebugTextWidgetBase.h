#pragma once
#include "CoreMinimal.h"
#include "DebugWidgetBase.h"
#include "UIWarningSettings.h"
#include "DebugTextWidgetBase.generated.h"

class UDataTable;
class UGSCTextBlock;
class UImage;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDebugTextWidgetBase : public UDebugWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetWarningId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextWarningDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShouldEnableInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DebugImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSCTextBlock* DebugText;
    
    UDebugTextWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    FUIWarningSettings FindRengeSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckDebugTextBluprint(const FText& Text, UUserWidget* InOwnerWidget);
    
};

