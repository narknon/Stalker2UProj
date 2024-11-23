#pragma once
#include "CoreMinimal.h"
#include "BookViewBase.h"
#include "PDAView.generated.h"

class UOverlay;
class UPDARegionPanel;
class UPDATimePanel;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAView : public UBookViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATimePanel* TimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDARegionPanel* RegionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PDAFadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PDAFadeInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSholdShowInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PDATurnOnTimer;
    
    UPDAView();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestList();
    
    UFUNCTION(BlueprintCallable)
    void HideAllWindows();
    
    UFUNCTION(BlueprintCallable)
    void CloseUpdateView();
    
};

