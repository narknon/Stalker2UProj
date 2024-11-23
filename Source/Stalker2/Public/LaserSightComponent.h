#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LaserSightComponent.generated.h"

class UMeshComponent;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULaserSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LaserSightVFX;
    
public:
    ULaserSightComponent(const FObjectInitializer& ObjectInitializer);

};

