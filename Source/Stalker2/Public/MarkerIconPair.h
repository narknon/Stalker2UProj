#pragma once
#include "CoreMinimal.h"
#include "MarkerIconPair.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMarkerIconPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Innactive;
    
    STALKER2_API FMarkerIconPair();
};

