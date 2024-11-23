#pragma once
#include "CoreMinimal.h"
#include "HoverIndicator.h"
#include "PDATutorialDetails.generated.h"

class UCommonVerticalBox;
class URichTextBlock;
class UScrollBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDATutorialDetails : public UHoverIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TutorialBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* TextScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWidgetsInLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollMoveSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVerticalBox* ParentVerticalBox;
    
public:
    UPDATutorialDetails();

};

