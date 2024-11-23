#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceReplicateMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceReplicateMesh : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UAnimInstanceReplicateMesh();

};

