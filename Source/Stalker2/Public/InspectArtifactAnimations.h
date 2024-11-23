#pragma once
#include "CoreMinimal.h"
#include "InspectArtifactAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInspectArtifactAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InspectArtifact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InspectArtifactWithBackpack;
    
    STALKER2_API FInspectArtifactAnimations();
};

