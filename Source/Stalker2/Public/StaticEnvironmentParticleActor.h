#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticEnvironmentParticleActor.generated.h"

class UStaticEnvironmentNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API AStaticEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    AStaticEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};

