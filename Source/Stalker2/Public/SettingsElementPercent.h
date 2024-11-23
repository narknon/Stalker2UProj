#pragma once
#include "CoreMinimal.h"
#include "FloatValueLocalisationPair.h"
#include "SettingElement.h"
#include "SettingsElementPercent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingsElementPercent : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPercentSign;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatValueLocalisationPair ReplacedValue;
    
public:
    USettingsElementPercent();

    UFUNCTION(BlueprintCallable)
    void SetValue(const float InValue, const bool bForce);
    
};

