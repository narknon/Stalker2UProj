#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "TetherCableMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TETHER_API UTetherCableMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UTetherCableMeshComponent(const FObjectInitializer& ObjectInitializer);

};

