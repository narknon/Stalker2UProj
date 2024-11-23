#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "SettingsPage.h"
#include "Templates/SubclassOf.h"
#include "InputMappingSettingsPage.generated.h"

class UInputMappingSettingsModel;
class USettingElementBindedInput;
class USettingElementInput;
class USettingsCategory;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UInputMappingSettingsPage : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingsCategory> AnchorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin AnchorPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingElementInput> InputElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingElementBindedInput> BindedInputElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SettingElementPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ToggleElementPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USettingsCategory*> Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingSettingsModel* InputMappingSettingsModel;
    
public:
    UInputMappingSettingsPage();

};

