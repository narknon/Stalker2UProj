#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInteractionType -FallbackName=EInteractionType
#include "OnUpdateProgressDelegate.generated.h"

// move to engine
UENUM(BlueprintType)
enum class EInteractionType : uint8 {
	None,
	Hold,
	MultiClick,
	Combined,
	SingleClick,
	DealDamage,
	AutoInteraction,
};

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateProgress, EInteractionType, InteractableType, float, Progress);

