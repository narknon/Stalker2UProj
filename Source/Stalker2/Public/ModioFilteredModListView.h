#pragma once
#include "CoreMinimal.h"
#include "ModioCommonFilteredModListView.h"
#include "ModioFilteredModListView.generated.h"

class UModioModListPageInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioFilteredModListView : public UModioCommonFilteredModListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioModListPageInfo* PageInfo;
    
public:
    UModioFilteredModListView();

};

