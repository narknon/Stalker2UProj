#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsSpacer.generated.h"

class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsSpacer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
public:
    UCreditsSpacer();

};

