#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryEntryStyle.generated.h"

class UModioCommonDynamicImageStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonModGalleryEntryStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDynamicImageStyle> ModImageNormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDynamicImageStyle> ModImageSelectedStyle;
    
    UModioCommonModGalleryEntryStyle();

};

