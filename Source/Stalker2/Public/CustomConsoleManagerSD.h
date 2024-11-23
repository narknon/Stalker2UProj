#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSD.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerSD : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSD();

    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportToPlacesOfInterest(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowCompass() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowAllWidget() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XHideCompass() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XHideAllWidget() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XGetActorNameByUID(int32 UID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XBeginPlay() const;
    
};

