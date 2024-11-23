#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "PlatformButtonStateDefiner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlatformButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AvailablePlatforms;
    
    UPlatformButtonStateDefiner();

};

