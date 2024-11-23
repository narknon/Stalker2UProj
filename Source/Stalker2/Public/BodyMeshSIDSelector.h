#pragma once
#include "CoreMinimal.h"
#include "BodyMeshSIDSelector.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBodyMeshSIDSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FBodyMeshSIDSelector();
};

