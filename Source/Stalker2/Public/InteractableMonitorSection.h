#pragma once
#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "InteractableMonitorSection.generated.h"

class UNiagaraSystem;
class UObject;
class USignalReceiverComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AInteractableMonitorSection : public AInteractableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MonitorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* ActivationSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* DeactivationSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* DestructionSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestructionVFX;
    
public:
    AInteractableMonitorSection(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestructionSignalReceived(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivationSignalReceived(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivationSignalReceived(UObject* InObject);
    
};

