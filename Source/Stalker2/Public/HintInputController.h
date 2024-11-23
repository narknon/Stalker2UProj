#pragma once
#include "CoreMinimal.h"
#include "HintControllerBase.h"
#include "HintInputController.generated.h"

class UActionMimicButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHintInputController : public UHintControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionMimicButton* MimicButtonElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleMouseInput;
    
public:
    UHintInputController();

};

