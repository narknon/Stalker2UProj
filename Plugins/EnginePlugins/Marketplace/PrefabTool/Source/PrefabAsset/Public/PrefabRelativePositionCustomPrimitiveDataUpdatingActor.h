#pragma once
#include "CoreMinimal.h"
#include "TickOnlyInEditorActor.h"
#include "PrefabRelativePositionCustomPrimitiveDataUpdatingActor.generated.h"

UCLASS(Blueprintable)
class PREFABASSET_API APrefabRelativePositionCustomPrimitiveDataUpdatingActor : public ATickOnlyInEditorActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CustomDataIndex;
    
    APrefabRelativePositionCustomPrimitiveDataUpdatingActor(const FObjectInitializer& ObjectInitializer);

};

