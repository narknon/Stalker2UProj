#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PrefabVariantRule.h"
#include "PrefabComponent.generated.h"

class UBlueprint;
class UPrefabAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PREFABASSET_API UPrefabComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConnected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockSelection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabAsset* Prefab;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* GeneratedBlueprint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabVariantRule> VariantRulesOverwrite;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTransient: 1;
    
    UPrefabComponent(const FObjectInitializer& ObjectInitializer);

};

