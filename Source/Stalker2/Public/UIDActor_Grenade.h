#pragma once
#include "CoreMinimal.h"
#include "UIDActorOwnsModel.h"
#include "UIDActor_Grenade.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API AUIDActor_Grenade : public AUIDActorOwnsModel {
    GENERATED_BODY()
public:
    AUIDActor_Grenade(const FObjectInitializer& ObjectInitializer);

};

