#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonTabDescriptor.generated.h"

class UModioCommonTabButtonBase;
class UModioCommonTabButtonStyle;

USTRUCT(BlueprintType)
struct FModioCommonTabDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTabButtonBase> TabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTabButtonStyle> TabButtonStyle;
    
    MODIOUI_API FModioCommonTabDescriptor();
};

