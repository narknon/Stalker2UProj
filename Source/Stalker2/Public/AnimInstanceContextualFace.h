#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstanceContextualFace.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceContextualFace : public UAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HumanBody;
    
    UAnimInstanceContextualFace();

};

