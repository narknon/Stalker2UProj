#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDK.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerDK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDK();

    UFUNCTION(BlueprintCallable, Exec)
    void XSetInventoryGamepadNavigationParams(const float InputDelay, const float InputThreshold, const float SelectionDelay) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetInventoryGamepadNavigationByAxises(const bool bAxes) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetInventoryGamepadInputThreshold(const float InputThreshold) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetInventoryGamepadInputSelectionDelay(const float InputSelectionDelay) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetInventoryGamepadInputDelay(const float InputDelay) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGamepadNavigationBorderSpeed(const float Speed) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XGridNavigationVar(const int32 InVar) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDrawDebugInventoryNavigation(const bool bDraw) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDKStartTwoQuestStage(const FString& QSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDKStartQuestStage(const FString& QSID, const FString& SSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDKStartQuest(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDKFinishQuestStage(const FString& QSID, const FString& SSID, const bool bWin) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDKFinishQuest(const FString& SID, const bool bWin) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void UseStackSplitContextual(const bool bInUse) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void MoveItemsInTrade(const bool bMoveTraderItems, const bool bMoveOwnItems, const bool bMoveBarterItems) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideCursorInMouseDrag(const bool bHide) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllwaysShowDropHere(const bool bShow) const;
    
};

