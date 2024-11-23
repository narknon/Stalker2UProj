#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DeathCounter.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDeathCounter : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* DeathCounterText;
    
public:
    UDeathCounter();

};

