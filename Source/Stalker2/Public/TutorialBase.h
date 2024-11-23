#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "TutorialBase.generated.h"

class UOverlay;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTutorialBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* TutorialOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintFont;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationInSeconds;
    
public:
    UTutorialBase();

};

