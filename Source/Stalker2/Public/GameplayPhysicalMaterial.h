#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EPhysicalMaterialType.h"
#include "GameplayPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UGameplayPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCustomPhysicalMaterialType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicalMaterialType CustomPhysicalMaterialType;
    
public:
    UGameplayPhysicalMaterial();

};

