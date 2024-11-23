#pragma once
#include "CoreMinimal.h"
#include "ECableMeshGenerationType.generated.h"

UENUM(BlueprintType)
enum class ECableMeshGenerationType : uint8 {
    Basic,
    CustomMesh,
};

