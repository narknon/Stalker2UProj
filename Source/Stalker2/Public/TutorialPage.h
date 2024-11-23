#pragma once
#include "CoreMinimal.h"
#include "BackgroundSettings.h"
#include "EPDATutorialCategory.h"
#include "PDAPage.h"
#include "TutorialPage.generated.h"

class UPDATutorialButton;
class UPDATutorialDetails;
class UPDATutorialPanel;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTutorialPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialDetails* TutorialDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialButton* ButtonAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialButton* ButtonNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialButton* ButtonFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialButton* ButtonSurvival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialButton* ButtonEarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATutorialPanel* TutorialPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultOpenFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TutorialSlotListScrollTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPDATutorialCategory, FBackgroundSettings> BackgroundSettings;
    
    UTutorialPage();

    UFUNCTION(BlueprintCallable)
    void UIPDANavigatioTutorialUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigatioTutorialDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationMouseUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationMouseDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationButtonRelease();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowDetails(const bool bEmpty);
    
    UFUNCTION(BlueprintCallable)
    void ShowBlockListNavigation(const bool bBlock);
    
    UFUNCTION(BlueprintCallable)
    void ClickButtonMenu(const FName ButtonId);
    
};

