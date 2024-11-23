#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.h"
#include "InteractableObject.h"
#include "PrototypeSID.h"
#include "TopazScannerVFX.h"
#include "TopazScanner.generated.h"

class UPrimitiveComponent;
class USkeletalMeshComponent;
class UTopazScannerComponent;
class UTopazSingleClickComponent;

UCLASS(Blueprintable)
class STALKER2_API ATopazScanner : public AInteractableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* InvisibleScannerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopazSingleClickComponent* SingleClickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopazScannerComponent* ScannerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID RewardItemSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopazScannerVFX InactiveVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopazScannerVFX ActiveVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SievertsCenterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SievertsDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SievertsChangeFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccessfulScanner;
    
public:
    ATopazScanner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(const ETopazScannerState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStationary() const;
    
};

