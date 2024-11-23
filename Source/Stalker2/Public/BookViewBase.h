#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "BookViewBase.generated.h"

class UNavigationPanel;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UBookViewBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOpenDefaultPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnableNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnableClick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationPanel* NavigationPanel;
    
public:
    UBookViewBase();

protected:
    UFUNCTION(BlueprintCallable)
    void ClickMenuButton(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelectButton();
    
};

