#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerPictureWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UPlayerPictureWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerPicture;
    
public:
    UPlayerPictureWidget();

};

