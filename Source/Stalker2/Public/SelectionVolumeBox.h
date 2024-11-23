#pragma once
#include "CoreMinimal.h"
#include "SelectionVolumeBase.h"
#include "SelectionVolumeBox.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ASelectionVolumeBox : public ASelectionVolumeBase {
    GENERATED_BODY()
public:
    ASelectionVolumeBox(const FObjectInitializer& ObjectInitializer);

};

