#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FlowerParticleComponent.generated.h"

class UNiagaraComponent;
class UShapeComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFlowerParticleComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UShapeComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UFlowerParticleComponent(const FObjectInitializer& ObjectInitializer);

};

