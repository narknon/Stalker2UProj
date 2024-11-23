#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerVC.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerVC : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVC();

    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationRemoveMoney();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationRemoveItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationInspectArtifact();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationDiscoverRegion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationAddStash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationAddMoney();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationAddItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotificationAddAudilog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestSysNotification();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestPDA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestJournalFinishQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestJournal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowUIDebugInput(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowStatProgres(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupSaveSettinsRestart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupSaveSettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupSaveIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupOverwriteSavedGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupOverwriteCampaignSlot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupNotEnoughSpace();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupNoIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupGameCannotBeSaveNow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupExitGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupDiscardChanges();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupDeleteSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupCurruptedSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupBrokenIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopupAttentionIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowHUD(bool bIsShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowGameDataAndTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowCompassAngle(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XHideGameDataAndTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEnterRegion(const FString& RegionSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDialogFontSizeSubtitle(int32 InTextSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDialogFontSizeAnswer(int32 InTextSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeLanguageRU();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeLanguageEN();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeLanguage(int32 LanguageIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAddPDATutorialsBySID(const FString& InPDATutorialPrototypeSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAddNotesById(const FString& InNotePrototypeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAddItemDragToQuickSlot(int32 IndexSlot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUIShowTextSize(bool bEnabled);
    
};

