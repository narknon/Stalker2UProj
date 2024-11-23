#pragma once
#include "CoreMinimal.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioCommonQuickAccessViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonQuickAccessTabView.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonModOperationTrackerUserWidget;
class UModioCommonProfileImage;
class UModioCommonQuickAccessTabViewStyle;
class UModioCommonStorageSpaceTrackerUserWidget;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonQuickAccessTabView : public UModioCommonQuickAccessViewBase, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonQuickAccessTabViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* InternalBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* OverlayBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonProfileImage* ProfileImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* UserNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonStorageSpaceTrackerUserWidget* StorageSpaceTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* MainGameMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* AuthButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* MyCollectionButton;
    
public:
    UModioCommonQuickAccessTabView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonQuickAccessTabViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnMainGameMenuButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCollectionButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnAuthButtonClicked();
    

    // Fix for true pure virtual functions not being implemented
};

