#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "InteractViewDots.generated.h"

class UCanvasPanel;
class UImageWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UInteractViewDots : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* HintCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* HintDot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImageWidget*> HintDots;
    
public:
    UInteractViewDots();

};

