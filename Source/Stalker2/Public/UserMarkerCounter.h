#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UserMarkerCounter.generated.h"

class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UUserMarkerCounter : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* CounterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CounterFormat;
    
public:
    UUserMarkerCounter();

    UFUNCTION(BlueprintCallable)
    void UpdateMarkerCounterWidget(const int32 NewAmount);
    
};

