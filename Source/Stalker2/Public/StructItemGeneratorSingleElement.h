#pragma once
#include "CoreMinimal.h"
#include "EWeaponGenerationFlags.h"
#include "StructItemGeneratorElementCountedPart.h"
#include "StructItemGeneratorSingleElement.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FStructItemGeneratorSingleElement : public FStructItemGeneratorElementCountedPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponGenerationFlags WeaponGenerationFlags;
    
    FStructItemGeneratorSingleElement();
};

