#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GADeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class UGADeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionStatus_AfkThresholdToRecordSessionFinishInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerPosition_RepeatIntervalInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerPosition_AfkTimeThresholdInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerFactionReputation_RepeatIntervalInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStatus_RepeatIntervalInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStatus_AfkTimeThresholdInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStatus_EffectAppliedThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStatus_DamageReceivedThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStatus_MinDamageReceivedAmountToEmit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> PlayerStatus_ListOfEffectsToTrack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerStatus_MaxEffectsAttributesCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryStatus_RepeatIntervalInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryAction_Hover_HoverdTimeThresholdInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAction_Shoot_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAction_UseQuickSlot_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAction_GetHit_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCombat_PlayerHitThrottleTimeWindowInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCombat_EnemyHitThrottleTimeWindowInSeconds;
    
    UGADeveloperSettings();

};

