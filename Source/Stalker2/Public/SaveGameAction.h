#pragma once
#include "CoreMinimal.h"
#include "SaveLoadActionBase.h"
#include "SaveGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USaveGameAction : public USaveLoadActionBase {
    GENERATED_BODY()
public:
    USaveGameAction();

};

