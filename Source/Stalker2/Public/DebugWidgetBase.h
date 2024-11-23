#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DebugWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDebugWidgetBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisabledOnStart;
    
    UDebugWidgetBase();

};

