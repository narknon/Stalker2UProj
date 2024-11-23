#pragma once
#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonProgressBar.generated.h"

class UModioCommonProgressBarStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonProgressBarStyle> ModioStyle;
    
public:
    UModioCommonProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonProgressBarStyle> InStyle);
    
};

