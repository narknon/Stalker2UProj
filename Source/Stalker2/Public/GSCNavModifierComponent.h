#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBaseNavmeshInclusionInterface -FallbackName=DynamicBaseNavmeshInclusionInterface
#include "NavModifierComponent.h"
#include "NavModifierBodyConfig.h"
#include "Templates/SubclassOf.h"
#include "GSCNavModifierComponent.generated.h"

class UNavArea;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGSCNavModifierComponent : public UNavModifierComponent, public IDynamicBaseNavmeshInclusionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> SelectedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavModifierBodyConfig> PhysicalBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> TargetAreaClass;
    
public:
    UGSCNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RequestBoundsRecalculation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedComponent(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedComponents();
    
    UFUNCTION(BlueprintCallable)
    void AddSelectedComponent(UPrimitiveComponent* PrimitiveComponent);
    

    // Fix for true pure virtual functions not being implemented
};

