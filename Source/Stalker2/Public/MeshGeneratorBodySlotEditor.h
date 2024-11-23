#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MeshGeneratorBodySlotEditor.generated.h"

class UMeshGeneratorBodyMeshEditor;

UCLASS(Blueprintable)
class STALKER2_API UMeshGeneratorBodySlotEditor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshGeneratorBodyMeshEditor*> MeshArray;
    
public:
    UMeshGeneratorBodySlotEditor();

};

