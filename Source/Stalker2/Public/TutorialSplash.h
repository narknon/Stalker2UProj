#pragma once
#include "CoreMinimal.h"
#include "TutorialBase.h"
#include "TutorialSplash.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTutorialSplash : public UTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TitleTutorText;
    
    UTutorialSplash();

};

