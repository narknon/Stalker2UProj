#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "DialogFolder.generated.h"

class UDialogueAnswer;
class UProgressBarWidget;
class USlider;
class UTextWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogFolder : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialogueAnswer> AnswerSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HoverFolderStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnhoverFolderStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* AnswerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBarWidget* WFRTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* WFRSlider;
    
    UDialogFolder();

};

