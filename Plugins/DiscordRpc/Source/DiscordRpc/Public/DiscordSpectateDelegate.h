#pragma once
#include "CoreMinimal.h"
#include "DiscordSpectateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordSpectate, const FString&, spectateSecret);

