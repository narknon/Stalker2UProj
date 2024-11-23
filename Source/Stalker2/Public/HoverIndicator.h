#pragma once
#include "CoreMinimal.h"
#include "OnHoverIndicatorDelegate.h"
#include "WidgetBase.h"
#include "HoverIndicator.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHoverIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverIndicator OnHoverIndicator;
    
    UHoverIndicator();

};

