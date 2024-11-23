#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELocalizationLanguage.h"
#include "WidgetBase.h"
#include "PDASlotBase.generated.h"

class UCheckBoxWidget;
class UImage;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDASlotBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* SelectPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HoverBeckground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectBeckground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NewPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELocalizationLanguage, int32> CultureCutPreference;
    
    UPDASlotBase();

    UFUNCTION(BlueprintCallable)
    void SetSelectPointTint(FLinearColor InColor);
    
};

