#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAnomalyElementType.h"
#include "StrelokBossfightController.generated.h"

class UBoxComponent;
class UNiagaraSystem;
class USignalReceiverComponent;

UCLASS(Blueprintable)
class STALKER2_API AStrelokBossfightController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ControllerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* SignalReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnomalySpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnomalySpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnomalyElementType, UNiagaraSystem*> AnomalyElementVFXMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TLazyObjectPtr<AActor>> AnomalySpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> AnomalyFieldsSIDs;
    
public:
    AStrelokBossfightController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAnomalyField();
    
};

