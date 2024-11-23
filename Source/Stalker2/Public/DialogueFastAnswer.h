#pragma once
#include "CoreMinimal.h"
#include "DialogueAnswer.h"
#include "OnClickFastAnswerDelegate.h"
#include "DialogueFastAnswer.generated.h"

class UHintSwitcher;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogueFastAnswer : public UDialogueAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* HintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMoveOnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StylePrefix;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickFastAnswer OnClickFastAnswer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SkifChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SparkChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* VartaChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StrelokChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StalkerChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NoonChoiceIcon;
    
    UDialogueFastAnswer();

    UFUNCTION(BlueprintCallable)
    void SelectAnswer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSelectAnswer();
    
    UFUNCTION(BlueprintCallable)
    void EndSelectAnswer();
    
};

