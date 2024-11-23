#pragma once
#include "CoreMinimal.h"
#include "DialogueView.h"
#include "FastDialogueView.generated.h"

class UAbstractProgressBar;
class UDialogueFastAnswer;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UFastDialogueView : public UDialogueView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* AnswerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbstractProgressBar* TimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogueFastAnswer* DialogueAnswerFastLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogueFastAnswer* DialogueAnswerFastRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImportant;
    
    UFastDialogueView();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAfterClick();
    
public:
    UFUNCTION(BlueprintCallable)
    void UIFastDialogSecondAnswer();
    
    UFUNCTION(BlueprintCallable)
    void UIFastDialogFirstAnswer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSelectAnswer(bool bIsRightAnswer);
    
    UFUNCTION(BlueprintCallable)
    void EndSelectAnswer(bool bIsRightAnswer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BlockInput();
    
};

