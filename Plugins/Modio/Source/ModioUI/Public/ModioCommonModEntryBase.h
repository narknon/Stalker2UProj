#pragma once
#include "CoreMinimal.h"
#include "ModioExtendedModInfoUIDetails.h"
#include "ModioModInfoUIDetails.h"
#include "ModioUIAuthenticationChangedReceiver.h"
#include "ModioUIMediaDownloadCompletedReceiver.h"
#include "ModioUIModEnableWidget.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModEntryBase.generated.h"

class UModioCommonModOperationTrackerUserWidget;
class UModioCommonModOperationTrackerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModEntryBase : public UModioCommonActivatableWidget, public IUserObjectListEntry, public IModioUIUserChangedReceiver, public IModioUIMediaDownloadCompletedReceiver, public IModioUIAuthenticationChangedReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIModEnableWidget, public IModioUIModManagementEventReceiver, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;
    
public:
    UModioCommonModEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStyling(bool bIsListItemSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectModListItem();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeselectModListItem();
    

    // Fix for true pure virtual functions not being implemented
};

