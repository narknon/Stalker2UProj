#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SelectedAnswerMark.generated.h"

class UImage;
class UOverlay;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USelectedAnswerMark : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Hint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LockSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* TimerContainer;
    
    USelectedAnswerMark();

};

