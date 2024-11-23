#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArtifactStrafeBehaviourComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UArtifactStrafeBehaviourComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasScheduledJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float OuterRadiusJumpChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float AnotherAnomalyJumpChance;
    
public:
    UArtifactStrafeBehaviourComponent(const FObjectInitializer& ObjectInitializer);

};

