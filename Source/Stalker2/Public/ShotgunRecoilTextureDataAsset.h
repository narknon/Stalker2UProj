#pragma once
#include "CoreMinimal.h"
#include "BuckRecoilKeys.h"
#include "GunRecoilTextureDataAsset.h"
#include "ShotgunRecoilTextureDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UShotgunRecoilTextureDataAsset : public UGunRecoilTextureDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuckRecoilKeys> RecoilPatternBuckKeys;
    
public:
    UShotgunRecoilTextureDataAsset();

};

