#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NamesWidgetDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "CreditsRoleWidget.generated.h"

class UCreditsNamesWidget;
class UHorizontalBox;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsRoleWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RoleHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RoleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsNamesWidget> CreditsNamesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNamesWidgetDisplaySettings NamesDisplaySettings;
    
public:
    UCreditsRoleWidget();

};

