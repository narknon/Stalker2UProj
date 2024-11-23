#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "ForceFeedbackArgs.h"
#include "ProcessorsArray.h"
#include "ForceFeedbackSubsystem.generated.h"

class UForceFeedbackDataAsset;

UCLASS(Blueprintable)
class STALKER2_API UForceFeedbackSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UForceFeedbackDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FProcessorsArray> ActiveProcessors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FProcessorsArray> DelayedProcessors;
    
public:
    UForceFeedbackSubsystem();

    UFUNCTION(BlueprintCallable)
    bool StopFeedback(const FGameplayTag& Trigger);
    
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    void SetIntensityMultiplier(const float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntensityMultiplier() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool BP_StartFeedback(const FGameplayTag& Trigger, const FForceFeedbackArgs& Args, const float InIntensityMultiplier, const bool bOverrideStopCurrent, const bool bStopCurrent);
    
};

