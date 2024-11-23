#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UserWaterElement.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUserWaterElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* WaterMarks;
    
    UUserWaterElement();

};

