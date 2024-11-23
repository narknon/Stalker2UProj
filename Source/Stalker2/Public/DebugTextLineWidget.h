#pragma once
#include "CoreMinimal.h"
#include "DebugTextWidgetBase.h"
#include "RengeSettings.h"
#include "DebugTextLineWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDebugTextLineWidget : public UDebugTextWidgetBase {
    GENERATED_BODY()
public:
    UDebugTextLineWidget();

protected:
    UFUNCTION(BlueprintCallable)
    int32 GetIndecRowSettings(int32 CurrentRow, const TArray<FRengeSettings>& RowSettings);
    
};

