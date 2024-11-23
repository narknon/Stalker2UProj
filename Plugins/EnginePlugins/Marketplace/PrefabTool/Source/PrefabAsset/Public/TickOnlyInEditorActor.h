#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TickOnlyInEditorActor.generated.h"

UCLASS(Blueprintable)
class PREFABASSET_API ATickOnlyInEditorActor : public AActor {
    GENERATED_BODY()
public:
    ATickOnlyInEditorActor(const FObjectInitializer& ObjectInitializer);

};

