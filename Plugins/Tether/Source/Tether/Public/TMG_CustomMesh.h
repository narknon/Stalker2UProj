#pragma once
#include "CoreMinimal.h"
#include "CustomMeshProperties.h"
#include "TetherMeshGenerator.h"
#include "TMG_CustomMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TETHER_API UTMG_CustomMesh : public UTetherMeshGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomMeshProperties Properties;
    
    UTMG_CustomMesh();

};

