#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerIM.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerIM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerIM();

    UFUNCTION(BlueprintCallable, Exec)
    void XHighlightDangerAreas(const FString& NavMeshAgentName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XHighlightCovers(const FString& NavMeshAgentName) const;
    
};

