#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCollectionEntry.h"
#include "ModioModInfoUIDetails.h"
#include "ModioModCollectionEntryUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModCollectionEntryUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioModCollectionEntry Underlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedSubscriptionStatus;
    
    UModioModCollectionEntryUI();


    // Fix for true pure virtual functions not being implemented
};

