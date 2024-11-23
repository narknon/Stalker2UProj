#pragma once
#include "CoreMinimal.h"
#include "SaveLoadActionBase.h"
#include "OverwriteSaveGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOverwriteSaveGameAction : public USaveLoadActionBase {
    GENERATED_BODY()
public:
    UOverwriteSaveGameAction();

};

