#pragma once
#include "CoreMinimal.h"
#include "PopupBase.h"
#include "ControlSettingsPopup.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UControlSettingsPopup : public UPopupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* DescriptionLegendText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionTextStyleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyImageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextImageIndex;
    
public:
    UControlSettingsPopup();

};

