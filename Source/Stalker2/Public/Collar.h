#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collar.generated.h"

class UAkComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ACollar : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollarSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* HissingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CollarSK;
    
public:
    ACollar(const FObjectInitializer& ObjectInitializer);

};

