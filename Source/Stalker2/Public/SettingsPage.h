#pragma once
#include "CoreMinimal.h"
#include "ESettingCategoryType.h"
#include "WidgetBase.h"
#include "SettingsPage.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingsPage : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* OptionsContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingCategoryType Category;
    
public:
    USettingsPage();

};

