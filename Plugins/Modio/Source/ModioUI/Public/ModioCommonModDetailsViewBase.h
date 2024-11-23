#pragma once
#include "CoreMinimal.h"
#include "ModioExtendedModInfoUIDetails.h"
#include "ModioModInfoUIDetails.h"
#include "ModioUIModEnableWidget.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModDetailsViewBase.generated.h"

class UModioCommonModOperationTrackerUserWidget;
class UModioCommonModOperationTrackerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModDetailsViewBase : public UModioCommonActivatableWidget, public IModioUIModEnableWidget, public IModioUIUserChangedReceiver, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;
    
public:
    UModioCommonModDetailsViewBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

