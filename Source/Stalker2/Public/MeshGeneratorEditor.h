#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MeshGeneratorEditor.generated.h"

class UCustomDataVariationsEditor;
class UGroomCategoryEditor;
class UMeshGeneratorBodySlotEditor;
class UMeshGeneratorMaterialSlotEditor;

UCLASS(Blueprintable)
class STALKER2_API UMeshGeneratorEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentMeshGeneratorSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentItemGeneratorSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshGeneratorBodySlotEditor*> GeneratorBodySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshGeneratorMaterialSlotEditor*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomDataVariationsEditor*> CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGroomCategoryEditor*> Grooms;
    
public:
    UMeshGeneratorEditor();

};

