#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RecoilKeys.h"
#include "GunRecoilTextureDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UGunRecoilTextureDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecoilKeys> RecoilPatternAimKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecoilKeys> RecoilPatternHipKeys;
    
public:
    UGunRecoilTextureDataAsset();

};

