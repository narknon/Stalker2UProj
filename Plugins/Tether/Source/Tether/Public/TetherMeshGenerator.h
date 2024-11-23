#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TetherMeshGenerator.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, Config=TetherModeSettings)
class TETHER_API UTetherMeshGenerator : public UObject {
    GENERATED_BODY()
public:
    UTetherMeshGenerator();

};

