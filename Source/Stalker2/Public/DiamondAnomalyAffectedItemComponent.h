#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DiamondAnomalyAffectedItemComponent.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;
class UBoxComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDiamondAnomalyAffectedItemComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DiamondParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OverridePhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> DiamondParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAuxBus* DiamondAuxFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* DiamondAuxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* DiamondFilterBounds;
    
public:
    UDiamondAnomalyAffectedItemComponent(const FObjectInitializer& ObjectInitializer);

};

