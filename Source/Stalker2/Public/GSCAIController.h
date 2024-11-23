#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GSCAIController.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AGSCAIController : public AAIController {
    GENERATED_BODY()
public:
    AGSCAIController(const FObjectInitializer& ObjectInitializer);

};

