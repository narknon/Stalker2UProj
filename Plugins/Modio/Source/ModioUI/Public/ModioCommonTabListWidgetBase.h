#pragma once
#include "CoreMinimal.h"
#include "CommonTabListWidgetBase.h"
#include "Engine/DataTable.h"
#include "ModioCommonTabDescriptor.h"
#include "ModioCommonTabListWidgetBase.generated.h"

class UCommonActionWidget;
class UCommonButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonTabListWidgetBase : public UCommonTabListWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabButtonClicked, UCommonButtonBase*, TabButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonClicked OnTabButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* PreviousTabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* NextTabAction;
    
public:
    UModioCommonTabListWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetPreviousTabInputActionData(FDataTableRowHandle InPreviousTabInputActionData);
    
    UFUNCTION(BlueprintCallable)
    void SetNextTabInputActionData(FDataTableRowHandle InNextTabInputActionData);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByIDExtended(FName TabNameID, bool bSuppressClickFeedback, bool bSuppressOnTabSelectedIfAlreadySelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllDynamicTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RegisterDynamicTab(const FModioCommonTabDescriptor& TabDescriptor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTabSelectedInternal(FName TabNameID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNavigateToPreviousTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNavigateToNextTab();
    
};

