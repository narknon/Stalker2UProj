#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBaseNavmeshInclusionInterface -FallbackName=DynamicBaseNavmeshInclusionInterface
#include "NavModifierVolume.h"
#include "GSCNavModifierVolume.generated.h"

class UGuidActorComponent;

UCLASS(Blueprintable)
class STALKER2_API AGSCNavModifierVolume : public ANavModifierVolume, public IDynamicBaseNavmeshInclusionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuidActorComponent* GuidComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    AGSCNavModifierVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

