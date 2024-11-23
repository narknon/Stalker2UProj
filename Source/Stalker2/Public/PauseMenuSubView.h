#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "PauseMenuSubView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UPauseMenuSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
    UPauseMenuSubView();

};

