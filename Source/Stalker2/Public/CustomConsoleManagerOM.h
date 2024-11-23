#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerOM.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerOM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerOM();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselTimeToCenter(float Time) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselRotation(float Rotation) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselLiftUpTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselForce(float Force) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselDuration(float Duration) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselDebugTrajectory(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCarouselAngle(float Angle) const;
    
};

