#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "Templates/SubclassOf.h"
#include "ThreatPointerSettings.h"
#include "ThreatIndicator.generated.h"

class UOverlay;
class UThreatPointer;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UThreatIndicator : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ThreatsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatIndicatorShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreatPointerCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThreatPointerSettings ThreatPointerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatsUpdateInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThreatPointer> ThreatPointerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UThreatPointer*> ActiveThreatPointers;
    
public:
    UThreatIndicator();

};

