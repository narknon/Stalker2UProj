#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MenuButtonStateDefiner.generated.h"

class UMenuButtonActionBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMenuButtonStateDefiner : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* OverrideBlockedAction;
    
public:
    UMenuButtonStateDefiner();

};

