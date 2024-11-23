#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidgetSwitcher.h"
#include "ModioCommonWidgetSwitcher.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonWidgetSwitcher : public UCommonActivatableWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveIndexChanged_BP OnActiveWidgetIndexChanged_BP;
    
    UModioCommonWidgetSwitcher();

};

