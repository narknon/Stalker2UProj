#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "InteractViewHint.generated.h"

class UImageWidget;
class UTextWidget;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UInteractViewHint : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* InteractTextSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* HintsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* IconUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* IconOverweight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RunActionAnim;
    
    UInteractViewHint();

    UFUNCTION(BlueprintCallable)
    void OnRunAction();
    
};

