#pragma once
#include "CoreMinimal.h"
#include "SaveLoadActionBase.h"
#include "DeleteSaveAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDeleteSaveAction : public USaveLoadActionBase {
    GENERATED_BODY()
public:
    UDeleteSaveAction();

};

