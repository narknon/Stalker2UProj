#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ESlotDirection.h"
#include "TipPositionArgs.generated.h"

USTRUCT(BlueprintType)
struct FTipPositionArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlotDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Translation;
    
    STALKER2_API FTipPositionArgs();
};

