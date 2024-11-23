#pragma once
#include "CoreMinimal.h"
#include "AttractionPoint.generated.h"

class AActor;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FAttractionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SID;
    
    STALKER2_API FAttractionPoint();
};

