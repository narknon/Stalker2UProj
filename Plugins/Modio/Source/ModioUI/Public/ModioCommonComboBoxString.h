#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonComboBoxString.generated.h"

class UModioCommonComboBoxStringStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonComboBoxStringStyle> ModioStyle;
    
public:
    UModioCommonComboBoxString();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonComboBoxStringStyle> InStyle);
    
};

