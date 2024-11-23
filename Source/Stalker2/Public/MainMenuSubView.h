#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "MainMenuSubView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMainMenuSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
    UMainMenuSubView();

};

