#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmptyObject.generated.h"

class UBoxComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AEmptyObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    AEmptyObject(const FObjectInitializer& ObjectInitializer);

};

