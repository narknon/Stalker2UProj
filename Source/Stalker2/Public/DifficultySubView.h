#pragma once
#include "CoreMinimal.h"
#include "DifficultyData.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "DifficultySubView.generated.h"

class UMenuButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UDifficultySubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuButtonBase> DifficultyButtonStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> DifficultyButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDifficultyData> DifficultyDataSet;
    
public:
    UDifficultySubView();

};

