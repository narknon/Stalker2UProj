#pragma once
#include "CoreMinimal.h"
#include "SettingElement.h"
#include "ValueLocalisationPair.h"
#include "SettingElementValueLocSwitcher.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API USettingElementValueLocSwitcher : public USettingElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FValueLocalisationPair> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    USettingElementValueLocSwitcher();

};

