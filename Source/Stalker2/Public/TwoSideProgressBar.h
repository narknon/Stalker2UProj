#pragma once
#include "CoreMinimal.h"
#include "AbstractProgressBar.h"
#include "TwoSideProgressBar.generated.h"

class UImage;
class USlider;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTwoSideProgressBar : public UAbstractProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* RightSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* LeftSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressLine;
    
public:
    UTwoSideProgressBar();

};

