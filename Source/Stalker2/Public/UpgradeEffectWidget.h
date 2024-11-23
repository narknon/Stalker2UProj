#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "UpgradeEffectWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UUpgradeEffectWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EffectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EffectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PositiveEffectValueColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NegativeEffectValueColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NeutralEffectValueColor;
    
public:
    UUpgradeEffectWidget();

};

