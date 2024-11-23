#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsImage.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsImage : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UCreditsImage();

};

