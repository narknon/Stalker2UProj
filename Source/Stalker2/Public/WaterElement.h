#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WaterElement.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWaterElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UWaterElement();

};

