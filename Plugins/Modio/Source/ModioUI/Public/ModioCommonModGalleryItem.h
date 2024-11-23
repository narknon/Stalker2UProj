#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModInfo.h"
#include "ModioCommonModGalleryItem.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonModGalleryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModInfo ModInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageGalleryIndex;
    
    UModioCommonModGalleryItem();

};

