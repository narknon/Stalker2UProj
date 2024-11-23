#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SoundManager.generated.h"

class ALandscape;
class UAkRtpc;
class UAudioScattererDataAsset;
class UOnAKEventFinished_Proxy;

UCLASS(Blueprintable)
class STALKER2_API USoundManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAudioScattererDataAsset* AudioScatterer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALandscape> Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* InteriorFlagRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnAKEventFinished_Proxy* OnAKEventFinished_Proxy;
    
public:
    USoundManager();

};

