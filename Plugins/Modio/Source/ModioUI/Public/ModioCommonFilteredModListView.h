#pragma once
#include "CoreMinimal.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioUIModInfoReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModListViewInterface.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFilteredModListView.generated.h"

class UListView;
class UModioCommonButtonBase;
class UModioCommonErrorWithRetryWidget;
class UModioCommonFilteredModListViewStyle;
class UModioCommonTextBlock;
class UPanelWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonFilteredModListView : public UModioCommonActivatableWidget, public IModioCommonModListViewInterface, public IModioUIModInfoReceiver, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSetModsFromModInfoListDynamicStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSetModsFromModInfoListDynamicFinished);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonFilteredModListViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ModList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* InitialScreenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* NoResultsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PageNavigationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* PreviousPageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* NextPageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* CurrentPageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TotalPagesTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TotalModsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ModListLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetModsFromModInfoListDynamicStarted OnSetModsFromModInfoListDynamicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetModsFromModInfoListDynamicFinished OnSetModsFromModInfoListDynamicFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSearchedBefore;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 CurrentPageIndex;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 TotalMods;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 PageSize;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 TotalPages;
    
public:
    UModioCommonFilteredModListView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonFilteredModListViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageNavigationVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoResultsVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInitialScreenVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePreviousPageClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNextPageClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetNumItems() const;
    

    // Fix for true pure virtual functions not being implemented
};

