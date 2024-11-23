#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "HintStyleSettings.h"
#include "MenuHintSettings.h"
#include "ShortcutData.generated.h"

class UMenuButtonActionBase;

USTRUCT(BlueprintType)
struct FShortcutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHintStyleSettings LegendButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuHintSettings MenuHintSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* ExecuteAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerEvent InputEventType;
    
    STALKER2_API FShortcutData();
};

