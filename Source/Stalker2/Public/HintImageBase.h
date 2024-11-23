#pragma once
#include "CoreMinimal.h"
#include "EInputIconsType.h"
#include "WidgetBase.h"
#include "HintImageBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHintImageBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputIconsType InputIconsType;
    
    UHintImageBase();

};

