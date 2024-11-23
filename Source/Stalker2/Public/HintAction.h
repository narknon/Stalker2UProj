#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "HintAction.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHintAction : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HintButton;
    
    UHintAction();

};

