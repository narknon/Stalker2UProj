#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SkinnedDecalInstance.generated.h"

class USkinnedDecalSampler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalInstance : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float size;
    
    USkinnedDecalInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDecal();
    
    UFUNCTION(BlueprintCallable)
    USkinnedDecalSampler* GetSampler();
    
};

