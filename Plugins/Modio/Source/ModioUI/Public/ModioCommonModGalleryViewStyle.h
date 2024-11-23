#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryViewStyle.generated.h"

class UModioCommonDynamicImageStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonModGalleryViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDynamicImageStyle> GalleryImageStyle;
    
    UModioCommonModGalleryViewStyle();

};

