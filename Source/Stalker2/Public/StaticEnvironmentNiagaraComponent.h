#pragma once
#include "CoreMinimal.h"
#include "EStaticParticleType.h"
#include "EnvironmentNiagaraComponent.h"
#include "StaticEnvironmentNiagaraComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStaticEnvironmentNiagaraComponent : public UEnvironmentNiagaraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrototypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticParticleType ParticleType;
    
public:
    UStaticEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

