#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "CharacterStatSlot.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCharacterStatSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StatImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressBeckground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StatIcon;
    
    UCharacterStatSlot();

};

