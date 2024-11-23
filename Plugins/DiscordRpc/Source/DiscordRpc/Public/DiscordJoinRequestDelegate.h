#pragma once
#include "CoreMinimal.h"
#include "DiscordUserData.h"
#include "DiscordJoinRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordJoinRequest, const FDiscordUserData&, joinRequest);

