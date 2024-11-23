#pragma once
#include "CoreMinimal.h"
#include "SettingElement.h"
#include "SettingElementOnOff.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingElementOnOff : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDependenciesWhenValueIs;
    
public:
    USettingElementOnOff();

};

