#pragma once
#include "CoreMinimal.h"
#include "BasicMeshProperties.h"
#include "TetherMeshGenerator.h"
#include "TMG_Basic.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TETHER_API UTMG_Basic : public UTetherMeshGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicMeshProperties Properties;
    
    UTMG_Basic();

};

