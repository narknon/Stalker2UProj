#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "SpawnNiagaraSystemAtLocation.h"
#include "AnimNotify_SpawnNiagaraSystemAtLocationContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnNiagaraSystemAtLocation SpawnNiagaraSystemAtLocation;
    
public:
    UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction();

};

