#pragma once
#include "CoreMinimal.h"
#include "SaveLoadIO.h"
#include "PCSaveLoadIO.generated.h"

UCLASS(Blueprintable)
class UPCSaveLoadIO : public USaveLoadIO {
    GENERATED_BODY()
public:
    UPCSaveLoadIO();

};

