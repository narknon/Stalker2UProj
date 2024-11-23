#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsSectionTitle.generated.h"

class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsSectionTitle : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RoleText;
    
public:
    UCreditsSectionTitle();

};

