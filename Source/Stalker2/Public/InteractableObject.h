#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidInterface.h"
#include "UIDActor_InteractableObject.h"
#include "InteractableObject.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AInteractableObject : public AUIDActor_InteractableObject, public IGuidInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnbreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelfSufficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrerequisiteRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    AInteractableObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Toggle();
    
    UFUNCTION(BlueprintCallable)
    void SetUnbreakable(const bool bInUnbreakable);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfSufficient(const bool bInSelfSufficient);
    
    UFUNCTION(BlueprintCallable)
    void SetPrerequisiteRequired(const bool bInPrerequisiteRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionActive(const bool bInInteractionActive);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBroken(const bool bInBroken);
    
    UFUNCTION(BlueprintCallable)
    void PauseSkeletalComponent(const bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNightStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmissionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmissionFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationEventTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnbreakable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfSufficient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrerequisiteRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

