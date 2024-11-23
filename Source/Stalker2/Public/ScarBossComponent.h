#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomDamageHandleComponent.h"
#include "PrototypeSID.h"
#include "ScarPhaseData.h"
#include "ScarBossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UScarBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FScarPhaseData> Phases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID StunMeshGenerator;
    
public:
    UScarBossComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

