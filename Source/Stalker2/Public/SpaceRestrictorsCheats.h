#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "SpaceRestrictorsCheats.generated.h"

UCLASS(Blueprintable)
class STALKER2_API USpaceRestrictorsCheats : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    USpaceRestrictorsCheats();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XRestrictorsShowResponse(const int32 UID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRestrictorsPrint();
    
};

