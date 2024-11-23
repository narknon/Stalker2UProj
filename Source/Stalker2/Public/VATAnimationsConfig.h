#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VATAnimation.h"
#include "VATAnimationsConfig.generated.h"

UCLASS(Blueprintable)
class UVATAnimationsConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialNextAnimPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialNextAnimLastFramePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialPrevAnimPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialAnimBlendingPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVATAnimation> Animations;
    
    UVATAnimationsConfig();

};

