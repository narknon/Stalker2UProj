#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "HintActionRichText.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHintActionRichText : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHintLock;
    
public:
    UHintActionRichText();

};

