#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesData.h"
#include "AttachedMagazineStruct.h"
#include "EAttachType.h"
#include "WeaponAttachMeshesData.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FWeaponAttachMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttachType, FAttachMeshesData> AttachMeshesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> BulletMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachedMagazineStruct> MagazineMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> WeaponStaticMeshParts;
    
    FWeaponAttachMeshesData();
};

