#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PrototypeSID.h"
#include "ShootingWeaponComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UShootingWeaponComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID WeaponPrototypeSID;
    
public:
    UShootingWeaponComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShootWithOwnerOverride(UObject* OwnerOverride);
    
    UFUNCTION(BlueprintCallable)
    void Shoot();
    
};

