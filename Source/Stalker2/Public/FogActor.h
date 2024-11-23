#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FogParams.h"
#include "FogActor.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STALKER2_API AFogActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FogMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFogParams> FogPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DensityParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeightMinParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeightMaxParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
public:
    AFogActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFogParams GetFogParamsForCurrentWeather() const;
    
};

