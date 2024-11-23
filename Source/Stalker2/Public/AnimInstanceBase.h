#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceBase.generated.h"

class AObj;
class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, NonTransient)
class UAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AObj> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DummyAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DummyBlueprint;
    
public:
    UAnimInstanceBase();

};

