#pragma once
#include "CoreMinimal.h"
#include "ModioCommonUserProfileWidget.h"
#include "ModioUserProfileWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioUserProfileWidget : public UModioCommonUserProfileWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* NickNameText;
    
public:
    UModioUserProfileWidget();

};

