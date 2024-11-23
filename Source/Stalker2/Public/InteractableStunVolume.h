#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractableObject.h"
#include "InteractableStunVolume.generated.h"

class UGSCNavModifierComponent;
class UObject;
class USignalReceiverComponent;
class USignalSenderComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AInteractableStunVolume : public AInteractableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSCNavModifierComponent* SpaceRestrictorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* MonitorActivationSignalSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* ObjectActivationSignalSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* MonitorDeactivationSignalSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* ObjectDeactivationSignalSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* MonitorDestructionSignalSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* VolumeActivationSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
public:
    AInteractableStunVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVolumeForceDeactivated(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVolumeDeactivated(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVolumeActivated(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownEnded(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void ActivateVolume(UObject* InObject);
    
};

