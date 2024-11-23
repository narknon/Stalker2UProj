#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodsuckerInvisibilityComponent.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBloodsuckerInvisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InvisibilityChangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    UBloodsuckerInvisibilityComponent(const FObjectInitializer& ObjectInitializer);

};

