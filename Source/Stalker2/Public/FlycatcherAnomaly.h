#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "FlycatcherAnomaly.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;
class UAkRtpc;
class UAkStateValue;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AFlycatcherAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VFXEffectSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAuxBus* FlycatcherAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* FlycatcherAuxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* InfluenceLevelRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* DefaultStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* FlycatcherStateValue;
    
public:
    AFlycatcherAnomaly(const FObjectInitializer& ObjectInitializer);

};

