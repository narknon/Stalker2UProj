#pragma once
#include "CoreMinimal.h"
#include "ModioModInfo.h"
#include "ModioModCategoryParams.h"
#include "EModioCommonSearchViewType.h"
#include "ModioCommonModBrowserBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowser.generated.h"

class UModioCommonActionBar;
class UModioCommonActivatableWidget;
class UModioCommonActivatableWidgetStack;
class UModioCommonTabListWidgetBase;
class UModioCommonUserProfileBase;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModBrowser : public UModioCommonModBrowserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NotificationController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonUserProfileBase* UserProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTabListWidgetBase* TabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActivatableWidgetStack* ContentStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActivatableWidgetStack* AuthStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActivatableWidgetStack* ReportStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActivatableWidgetStack* RightTabStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActivatableWidgetStack* DialogStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonActionBar* ActionBar;
    
public:
    UModioCommonModBrowser();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowSearchView(EModioCommonSearchViewType SearchType, const FModioModCategoryParams& CurrentFilterParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowQuickAccessView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowModDetailsView(const FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowFeaturedView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowCollectionView();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveTab(FName TabNameID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideSearchView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideReportMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideQuickAccessView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideModDetailsView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideFeaturedView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideCollectionView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleViewChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetViewFromTabNameID(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget>& OutView) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddTab(FName TabNameID, const FText& TabText, TSubclassOf<UModioCommonActivatableWidget> ContentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddEmptyTab(FName TabNameID, const FText& TabText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddContentForTab(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget> ContentClass, UModioCommonActivatableWidget*& OutContent);
    
};

