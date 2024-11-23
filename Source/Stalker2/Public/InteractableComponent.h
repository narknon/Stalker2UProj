#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInteractionType -FallbackName=EInteractionType
#include "EDisplayPriority.h"
#include "InteractableComponentEndInteractSignatureDelegate.h"
#include "InteractableComponentRunActionSignatureDelegate.h"
#include "InteractableComponentRunAlternativeActionSignatureDelegate.h"
#include "OnExcludeQuestNodeSignatureDelegate.h"
#include "OnFinishQuestNodeSignatureDelegate.h"
#include "OnStartQuestNodeSignatureDelegate.h"
#include "OnUpdateInteractDelegate.h"
#include "OnUpdateProgressDelegate.h"
#include "UIDActorComponent.h"
#include "InteractableComponent.generated.h"

class AActor;
class UBaseInteractableAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UInteractableComponent : public UUIDActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartQuestNodeSignature OnStartQuestNode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishQuestNodeSignature OnFinishQuestNode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExcludeQuestNodeSignature OnExcludeQuestNode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentRunActionSignature OnRunAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentRunAlternativeActionSignature OnRunAlternativeAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableComponentEndInteractSignature OnEndInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateInteract OnUpdateInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateProgress OnUpdateProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseInteractableAction*> InteractableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TriggerActorsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AlternativeTriggerActorsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAlternativeUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayPriority DisplayPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionProgressDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionProgressIncreasingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionProgressFillTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideInteractionPromptText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractableWithDeadBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentInteractingActor;
    
public:
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayPriority(const EDisplayPriority& NewPriority);
    
    UFUNCTION(BlueprintCallable)
    bool GetPreventDefaultInteract() const;
    
    UFUNCTION(BlueprintCallable)
    EInteractionType GetInteractionType() const;
    
    UFUNCTION(BlueprintCallable)
    EDisplayPriority GetDisplayPriority() const;
    
};

