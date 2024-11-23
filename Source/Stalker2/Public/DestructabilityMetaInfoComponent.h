#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DestructabilityMetaInfoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDestructabilityMetaInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowConvertionToDestructibleObject;
    
public:
    UDestructabilityMetaInfoComponent(const FObjectInitializer& ObjectInitializer);

};

