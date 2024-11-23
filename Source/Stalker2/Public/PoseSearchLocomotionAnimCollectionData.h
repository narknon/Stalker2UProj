#pragma once
#include "CoreMinimal.h"
#include "PoseSearchMovementTagConfigs.h"
#include "PoseSearchLocomotionAnimCollectionData.generated.h"

class UPoseSearchLocomotionDescriptor;
class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionAnimCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSearchableAsset* SearchableRelaxState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchLocomotionDescriptor* Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchLocomotionDescriptor* DescriptorRelaxState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchMovementTagConfigs MovementTagConfigs;
    
    STALKER2_API FPoseSearchLocomotionAnimCollectionData();
};

