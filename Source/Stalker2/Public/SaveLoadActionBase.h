#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "SaveLoadActionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USaveLoadActionBase : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
    USaveLoadActionBase();

};

