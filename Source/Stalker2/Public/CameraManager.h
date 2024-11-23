#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "CameraManager.generated.h"

class APlayerCameraManager;
class UCameraComponent;
class UCameraModifier_LookAt;
class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable)
class STALKER2_API UCameraManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_LookAt* CachedCameraLookAtMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* FovMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* EnvironmentMPC;
    
public:
    UCameraManager();

};

