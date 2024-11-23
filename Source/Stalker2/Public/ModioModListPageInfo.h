#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModioModListPageInfo.generated.h"

class UHintInputController;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioModListPageInfo : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* PageInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintNavigationLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintNavigationRight;
    
public:
    UModioModListPageInfo();

};

