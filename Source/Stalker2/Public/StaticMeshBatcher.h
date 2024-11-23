#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticMeshBatcher.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AStaticMeshBatcher : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> BatchedISM;
    
public:
    AStaticMeshBatcher(const FObjectInitializer& ObjectInitializer);

};

