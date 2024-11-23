#pragma once
#include "CoreMinimal.h"
#include "SaveLoadIO.h"
#include "XboxSaveLoadIO.generated.h"

UCLASS(Blueprintable)
class UXboxSaveLoadIO : public USaveLoadIO {
    GENERATED_BODY()
public:
    UXboxSaveLoadIO();

};

