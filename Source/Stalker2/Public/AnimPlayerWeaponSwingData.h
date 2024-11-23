#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimPlayerWeaponSwingData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponSwingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ItemTotalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemTotalShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemSocketTotalShift;
    
    FAnimPlayerWeaponSwingData();
};

