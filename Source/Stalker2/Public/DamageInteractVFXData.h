#pragma once
#include "CoreMinimal.h"
#include "DamageInteractVFXData.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FDamageInteractVFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* InteractDamageVFX;
    
    STALKER2_API FDamageInteractVFXData();
};

