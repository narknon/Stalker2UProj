#pragma once
#include "CoreMinimal.h"
#include "MenuMainViewBase.h"
#include "PauseMenuMainView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UPauseMenuMainView : public UMenuMainViewBase {
    GENERATED_BODY()
public:
    UPauseMenuMainView();

};

