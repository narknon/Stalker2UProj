#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "GuitarChordView.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UGuitarChordView : public UWidgetBase {
    GENERATED_BODY()
public:
    UGuitarChordView();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinorScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMajorScale();
    
};

