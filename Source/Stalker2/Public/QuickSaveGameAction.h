#pragma once
#include "CoreMinimal.h"
#include "SaveLoadActionBase.h"
#include "QuickSaveGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UQuickSaveGameAction : public USaveLoadActionBase {
    GENERATED_BODY()
public:
    UQuickSaveGameAction();

};

