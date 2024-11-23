#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialType.h"
#include "LightningStrikeVFXMaterialPrototype.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FLightningStrikeVFXMaterialPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhysicalMaterialType> PhysicalMaterialTypes;
    
    FLightningStrikeVFXMaterialPrototype();
};

