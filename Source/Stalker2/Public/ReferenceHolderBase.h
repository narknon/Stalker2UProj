#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ReferenceHolderBase.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AReferenceHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, UClass*> ObjectsReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssetPath;
    
    AReferenceHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ValidateGatheredReferences() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateObjectReferences();
    
    UFUNCTION(BlueprintCallable)
    void CheckAssetReferences();
    
};

