#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDC.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerDC : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDC();

    UFUNCTION(BlueprintCallable, Exec)
    void XVideoTeleportPlayerWithFade(const float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawDebugDiamondAnomaly();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugPlayerArmorInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugLightningBallNavigation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugDrawOverlapWithAnomalyObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugCodeLock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugBulletDistanceScaling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportPlayerWithFade(const float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportPlayerInForwardDirection(const float Distance, const float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowIntroductionLogo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowDebugInfoForStash(const FString& InStashIdentifier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetWeatherTransitionTimeMultiplier(const float WeatherTransitionTimeMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCurrentCode(const FString& InCurrentCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRegenerateItemsInStashes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNPCRemoveAbility(const int32 NpcUID, const FString& AbilityTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNPCAddAbility(const int32 NpcUID, const FString& AbilityTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XKillNpcByUID(const int32 NpcUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeDropBodyMethod(bool bShouldDrop);
    
};

