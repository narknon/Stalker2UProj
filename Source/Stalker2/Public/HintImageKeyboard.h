#pragma once
#include "CoreMinimal.h"
#include "HintImageBase.h"
#include "HintImageKeyboard.generated.h"

class UImage;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHintImageKeyboard : public UHintImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HintImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HintBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* HintChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyboardCharStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackgroundName;
    
public:
    UHintImageKeyboard();

};

