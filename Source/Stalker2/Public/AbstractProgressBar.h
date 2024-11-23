#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "AbstractProgressBar.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UAbstractProgressBar : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressStyleId;
    
    UAbstractProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetProgressValue(float InProgress);
    
};

