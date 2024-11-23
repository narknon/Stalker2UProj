#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "SettingElement.h"
#include "SettingElementInput.generated.h"

class UHintImageKeyboard;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingElementInput : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintImageKeyboard* LeftHintImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintImageKeyboard* RightHintImage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PopupDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PopupApplyHintSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PopupCancelHintSID;
    
public:
    USettingElementInput();

};

