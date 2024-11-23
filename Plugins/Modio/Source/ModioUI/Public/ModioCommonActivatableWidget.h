#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ModioCommonActivatableWidget.generated.h"

class UModioCommonButtonBase;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnModioCommonActivatableWidgetActionFired);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCommonWidgetFocusChanged, bool, bIsFocused);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRoutedSetDataSource;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCommonWidgetFocusChanged OnFocusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBindInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFocusOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DataSource;
    
public:
    UModioCommonActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void SetDataSource(UObject* NewDataSource);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewportResized(FVector2D NewViewportSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataSourceUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetRequestIdentifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoFocusOnActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBindInputAction() const;
    
    UFUNCTION(BlueprintCallable)
    void FocusOnDesiredWidget();
    
    UFUNCTION(BlueprintCallable)
    void ClearListeningInputActions();
    
    UFUNCTION(BlueprintCallable)
    void ClearListeningInputAction(UModioCommonButtonBase* Button);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_UnbindInputActions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    void BP_ListenForInputAction(UModioCommonButtonBase* Button, FDataTableRowHandle InputAction, const FText& DisplayName, const UModioCommonActivatableWidget::FOnModioCommonActivatableWidgetActionFired& OnActionFired);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_BindInputActions();
    
};

