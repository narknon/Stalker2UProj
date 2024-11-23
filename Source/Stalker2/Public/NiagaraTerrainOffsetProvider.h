#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterProvider.h"
#include "NiagaraTerrainOffsetProvider.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNiagaraTerrainOffsetProvider : public UNiagaraParameterProvider {
    GENERATED_BODY()
public:
    UNiagaraTerrainOffsetProvider(const FObjectInitializer& ObjectInitializer);

};

