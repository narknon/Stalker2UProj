#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "CreditsSubView.generated.h"

class UCreditsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCreditsWidget* CreditsWidget;
    
public:
    UCreditsSubView();

};

