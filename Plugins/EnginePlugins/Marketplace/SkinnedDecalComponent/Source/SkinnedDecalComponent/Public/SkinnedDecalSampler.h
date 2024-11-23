#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MaterialTypes.h"
#include "ESkinnedDecalAdditionalData.h"
#include "SkinnedDecalSampler.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;
class USkinnedDecalInstance;
class USkinnedDecalSampler;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalSampler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DecalLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EmptyIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkinnedDecalAdditionalData> AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDecalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDecalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TranslucentBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TranslucentBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkinnedDecalInstance*, int32> InstanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TranslucentBlendMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> RenderMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DataTarget;
    
    USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateInstance(USkinnedDecalInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllDecals();
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float size, int32 SubUV, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetupMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkeletalMeshComponent* MeshComponent, bool Child);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecal(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetDataTarget();
    
    UFUNCTION(BlueprintCallable)
    void CloneDecals(USkinnedDecalSampler* Source);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDecals();
    
};

