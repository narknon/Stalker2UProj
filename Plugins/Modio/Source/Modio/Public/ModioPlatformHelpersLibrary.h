#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioAuthenticationProvider.h"
#include "EModioPlatformName.h"
#include "EModioPortal.h"
#include "ModioPlatformHelpersLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioPlatformHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioPlatformHelpersLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioPortal GetDefaultPortalForCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioAuthenticationProvider GetDefaultAuthProviderForCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioPlatformName GetCurrentPlatform();
    
};

