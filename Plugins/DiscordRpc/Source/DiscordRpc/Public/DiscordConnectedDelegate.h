#pragma once
#include "CoreMinimal.h"
#include "DiscordUserData.h"
#include "DiscordConnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordConnected, const FDiscordUserData&, joinRequest);

