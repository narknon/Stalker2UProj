#pragma once
#include "CoreMinimal.h"
#include "NoteFilterSettings.h"
#include "PDAButtonBase.h"
#include "PDANotesButton.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDANotesButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoteFilterSettings FilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldEnableStailManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPDANotesButton();

};

