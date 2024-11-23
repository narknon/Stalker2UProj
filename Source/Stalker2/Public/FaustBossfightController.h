#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ObjPrototypeSID.h"
#include "FaustBossfightController.generated.h"

class UNiagaraSystem;
class USignalSenderComponent;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API AFaustBossfightController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ControllerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CloneSpawnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* CloneKilledSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CloneSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjPrototypeSID> ClonePrototypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjPrototypeSID BossPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerFieldOfViewAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpawnDistance;
    
public:
    AFaustBossfightController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryTeleportBossToHiddenLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetCloneSpawnEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneSwitch(const AActor* CloneActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneSpawned(const AActor* CloneActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloneKilled(const AActor* CloneActor);
    
};

