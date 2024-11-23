#pragma once
#include "CoreMinimal.h"
#include "SaveLoadActionBase.h"
#include "LoadSaveAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULoadSaveAction : public USaveLoadActionBase {
    GENERATED_BODY()
public:
    ULoadSaveAction();

};

