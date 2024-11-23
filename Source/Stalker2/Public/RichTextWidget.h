#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "RichTextWidget.generated.h"

UCLASS(Blueprintable)
class STALKER2_API URichTextWidget : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    URichTextWidget();

};

