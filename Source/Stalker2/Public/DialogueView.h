#pragma once
#include "CoreMinimal.h"
#include "DialogAnswersStyles.h"
#include "ViewBaseExtended.h"
#include "DialogueView.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogueView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAnswersStyles AswersStyles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogTimeDelay;
    
public:
    UDialogueView();

};

