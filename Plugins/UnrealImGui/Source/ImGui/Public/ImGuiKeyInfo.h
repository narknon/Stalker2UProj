#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateTypes.h"
#include "ImGuiKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState shift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState ctrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState alt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState Cmd;
    
    IMGUI_API FImGuiKeyInfo();
};

