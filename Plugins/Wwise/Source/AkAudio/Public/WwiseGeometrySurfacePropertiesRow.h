#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseGeometrySurfacePropertiesRow.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FWwiseGeometrySurfacePropertiesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmissionLoss;
    
    AKAUDIO_API FWwiseGeometrySurfacePropertiesRow();
};

