#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "Templates/SubclassOf.h"
#include "GameInstanceSubsystemButtonStateDefiner.generated.h"

class UGameInstanceSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class UGameInstanceSubsystemButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameInstanceSubsystem>> ExcludeSubsystems;
    
    UGameInstanceSubsystemButtonStateDefiner();

};

