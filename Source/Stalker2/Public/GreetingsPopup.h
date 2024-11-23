#pragma once
#include "CoreMinimal.h"
#include "PopupBase.h"
#include "GreetingsPopup.generated.h"

class UImageWidget;
class UModifiableRichText;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UGreetingsPopup : public UPopupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModifiableRichText* DescriptionRich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* DescriptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* BackgroundImage;
    
public:
    UGreetingsPopup();

};

