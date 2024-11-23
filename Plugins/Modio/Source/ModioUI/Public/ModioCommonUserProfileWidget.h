#pragma once
#include "CoreMinimal.h"
#include "ModioCommonUserProfileBase.h"
#include "ModioCommonUserProfileWidget.generated.h"

class UModioCommonButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonUserProfileWidget : public UModioCommonUserProfileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ProfileButton;
    
public:
    UModioCommonUserProfileWidget();

};

