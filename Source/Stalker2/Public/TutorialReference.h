#pragma once
#include "CoreMinimal.h"
#include "TutorialBase.h"
#include "TutorialReference.generated.h"

class URichTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTutorialReference : public UTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TitleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TitleLineBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* LineWithIconBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TitleTutorText;
    
    UTutorialReference();

};

