#pragma once
#include "CoreMinimal.h"
#include "EDiscordJoinResponseCodes.generated.h"

UENUM(BlueprintType)
enum class EDiscordJoinResponseCodes : uint8 {
    DISCORD_REPLY_NO,
    DISCORD_REPLY_YES,
    DISCORD_REPLY_IGNORE,
};

