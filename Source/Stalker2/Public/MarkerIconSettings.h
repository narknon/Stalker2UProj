#pragma once
#include "CoreMinimal.h"
#include "MarkerIconSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMarkerIconSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureTracked;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RelativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorSID;
    
    STALKER2_API FMarkerIconSettings();
};

