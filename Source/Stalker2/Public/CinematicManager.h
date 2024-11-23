#pragma once
#include "CoreMinimal.h"
#include "CinematicSectionParams.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseManager.h"
#include "CinematicManager.generated.h"

class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable)
class STALKER2_API UCinematicManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCinematicSectionParams CinematicSectionParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* PlayerParametersMPC;
    
    UCinematicManager();

    UFUNCTION(BlueprintCallable)
    void OnSubtitleSectionStart(const FString& NPCSID, const FString& DialogSID);
    
    UFUNCTION(BlueprintCallable)
    void OnSubtitleSectionEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyFrameSectionStart(const FCinematicSectionParams& InCinematicSectionParams);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyFrameSectionEnd(FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    void OnHapticFeedbackStart(FGameplayTag ForceFeeedbackEffectTag) const;
    
    UFUNCTION(BlueprintCallable)
    void OnHapticFeedbackEnd(FGameplayTag ForceFeeedbackEffectTag) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeScreenEnd(bool bFadeOut, FLinearColor FadeTargetColor, float FadeAmount, float FadeTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicStarted();
    
};

