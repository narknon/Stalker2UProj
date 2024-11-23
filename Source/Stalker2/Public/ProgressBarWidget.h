#pragma once
#include "CoreMinimal.h"
#include "AbstractProgressBar.h"
#include "ProgressBarWidget.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UProgressBarWidget : public UAbstractProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarObj;
    
public:
    UProgressBarWidget();

};

