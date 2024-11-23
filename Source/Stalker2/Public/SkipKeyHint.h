#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkipKeyHint.generated.h"

class UHintControllerBase;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USkipKeyHint : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintControllerBase* InputController;
    
public:
    USkipKeyHint();

};

