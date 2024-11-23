#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "FadeoutScreen.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UFadeoutScreen : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* SpeakerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SpeakerNameContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FadeoutImage;
    
    UFadeoutScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void UISkipFadeoutScreen();
    
};

