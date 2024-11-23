#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "EULAView.generated.h"

class UModifiableRichText;
class UScrollBox;
class USettingElementSwitcher;
class UTextWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UEULAView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* EULATitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TextVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* EULAScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModifiableRichText* EULAMainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* SendAnalyticsDataSwitcher;
    
    UEULAView();

protected:
    UFUNCTION(BlueprintCallable)
    void TurnSendAnalyticsOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnSendAnalyticsOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAcceptButtonBP();
    
    UFUNCTION(BlueprintCallable)
    void ScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void ScrollDown();
    
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void Decline();
    
    UFUNCTION(BlueprintCallable)
    void Accept();
    
};

