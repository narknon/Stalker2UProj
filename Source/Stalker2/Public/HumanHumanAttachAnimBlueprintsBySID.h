#pragma once
#include "CoreMinimal.h"
#include "HumanHumanAttachAnimBlueprintsBySID.generated.h"

USTRUCT(BlueprintType)
struct FHumanHumanAttachAnimBlueprintsBySID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AttachAnimBlueprint;
    
    STALKER2_API FHumanHumanAttachAnimBlueprintsBySID();
};

