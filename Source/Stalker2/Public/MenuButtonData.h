#pragma once
#include "CoreMinimal.h"
#include "ShortcutData.h"
#include "MenuButtonData.generated.h"

class UMenuButtonActionBase;
class UMenuButtonBase;
class UMenuButtonStateDefiner;

USTRUCT(BlueprintType)
struct FMenuButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuButtonBase> ButtonStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonNameSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* ButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> ButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMenuButtonStateDefiner*> ButtonDefiners;
    
    STALKER2_API FMenuButtonData();
};

