#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBoxStyle.generated.h"

class UModioCommonScrollBarStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonScrollBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBoxStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonScrollBarStyle> ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackPadScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrontPadScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateWheelScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScrollWhenFocusChanges ScrollWhenFocusChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRightClickDragScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScrollByNavigationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationScrollOffsetStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationScrollOffsetSpeed;
    
    UModioCommonScrollBoxStyle();

};

