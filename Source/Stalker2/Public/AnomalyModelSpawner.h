#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrototypeSID.h"
#include "AnomalyModelSpawner.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AAnomalyModelSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnBeginPlay;
    
public:
    AAnomalyModelSpawner(const FObjectInitializer& ObjectInitializer);

};

