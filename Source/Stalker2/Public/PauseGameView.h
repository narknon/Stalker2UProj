#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "PauseGameView.generated.h"

class UGameMenuElement;
class UImage;
class UOverlay;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPauseGameView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Online;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* DebugMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* BackToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMenuElement* DebugBenchmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MenuOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OptionsOverlay;
    
    UPauseGameView();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateShowDebugMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void UIOptionsBack();
    
    UFUNCTION(BlueprintCallable)
    void UIMenuMoveUp();
    
    UFUNCTION(BlueprintCallable)
    void UIMenuMoveDown();
    
    UFUNCTION(BlueprintCallable)
    void UIMenuConfirm();
    
    UFUNCTION(BlueprintCallable)
    void UIMenuBack();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSave();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOptions();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOnline();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnClickExit();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDebugMaps();
    
    UFUNCTION(BlueprintCallable)
    void OnClickContinue();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBackToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBack();
    
};

