#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonRichTextBlock.generated.h"

class UModioCommonRichTextStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonRichTextBlock : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonRichTextStyle> ModioStyle;
    
public:
    UModioCommonRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonRichTextStyle> InStyle);
    
};

