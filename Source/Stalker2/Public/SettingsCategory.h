#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SettingsCategory.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingsCategory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryNameSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* CategoryNameText;
    
public:
    USettingsCategory();

};

