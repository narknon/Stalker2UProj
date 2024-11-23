#pragma once
#include "CoreMinimal.h"
#include "AttachedMagazineStruct.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAttachedMagazineStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MagazineMesh;
    
    FAttachedMagazineStruct();
};

