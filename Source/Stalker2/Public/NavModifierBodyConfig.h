#pragma once
#include "CoreMinimal.h"
#include "NavModifierBodyConfig.generated.h"

USTRUCT(BlueprintType)
struct FNavModifierBodyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicalBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShapeIndexesToProcess;
    
    STALKER2_API FNavModifierBodyConfig();
};

