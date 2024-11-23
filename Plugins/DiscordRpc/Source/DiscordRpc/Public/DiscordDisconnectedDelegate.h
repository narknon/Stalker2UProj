#pragma once
#include "CoreMinimal.h"
#include "DiscordDisconnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordDisconnected, int32, ErrorCode, const FString&, errorMessage);

