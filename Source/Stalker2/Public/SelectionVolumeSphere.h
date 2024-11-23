#pragma once
#include "CoreMinimal.h"
#include "SelectionVolumeBase.h"
#include "SelectionVolumeSphere.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ASelectionVolumeSphere : public ASelectionVolumeBase {
    GENERATED_BODY()
public:
    ASelectionVolumeSphere(const FObjectInitializer& ObjectInitializer);

};

