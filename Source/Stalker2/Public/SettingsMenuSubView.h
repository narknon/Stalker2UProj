#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "SettingsMenuSubView.generated.h"

class UMenuButtonModel;
class USettingsView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API USettingsMenuSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsView* SettingsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuButtonModel* ElementButtonHoveredMenuButtonModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuButtonModel* SubCategoryMenuButtonModel;
    
public:
    USettingsMenuSubView();

};

