#pragma once
#include "CoreMinimal.h"
#include "HintImageBase.h"
#include "HintImageGamepad.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHintImageGamepad : public UHintImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HintImage;
    
public:
    UHintImageGamepad();

};

