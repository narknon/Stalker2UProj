#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonListView.generated.h"

class UModioCommonListViewStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonListView : public UCommonListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonListViewStyle> ModioStyle;
    
public:
    UModioCommonListView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle);
    
};

