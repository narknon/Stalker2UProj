#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesData.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAttachMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ArrayMeshes;
    
    FAttachMeshesData();
};

