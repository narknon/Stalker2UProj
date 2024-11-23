#pragma once
#include "CoreMinimal.h"
#include "MediaCapture.h"
#include "FileMediaCapture.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UFileMediaCapture : public UMediaCapture {
    GENERATED_BODY()
public:
    UFileMediaCapture();

};

