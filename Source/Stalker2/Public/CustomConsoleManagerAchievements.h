#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAchievements.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerAchievements : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAchievements();

    UFUNCTION(BlueprintCallable, Exec)
    void XAchievementsUpdateDebugAchievement(const int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAchievementsResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAchievementsProcessFinishCampaign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAchievementsAddProgress(const FString& Name, const int32 Value);
    
};

