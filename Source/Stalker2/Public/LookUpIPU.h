#pragma once
#include "CoreMinimal.h"
#include "InertionIPU.h"
#include "LookUpIPU.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ULookUpIPU : public UInertionIPU {
    GENERATED_BODY()
public:
    ULookUpIPU();

};

