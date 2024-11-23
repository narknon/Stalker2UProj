#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBar.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBar.generated.h"

class UModioCommonScrollBarStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonScrollBar : public UScrollBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonScrollBarStyle> ModioStyle;
    
public:
    UModioCommonScrollBar();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonScrollBarStyle> InStyle);
    
};

