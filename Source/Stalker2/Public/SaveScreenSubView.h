#pragma once
#include "CoreMinimal.h"
#include "ESaveType.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "SaveScreenSubView.generated.h"

class UMenuButtonActionBase;
class UMenuButtonBase;
class UMenuNavigationPanelBase;
class USaveLoadActionBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API USaveScreenSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveLoadActionBase* SaveButtonActionPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuButtonBase> SaveButtonStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> SaveButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveLoadActionBase* NewSaveButtonActionPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuButtonBase> NewSaveButtonStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuButtonBase> BlockedButtonStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> NewSaveButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ESaveType> SaveTypesToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* BlockedSaveButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* SaveButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuNavigationPanelBase* NavigationPanel;
    
public:
    USaveScreenSubView();

    UFUNCTION(BlueprintCallable)
    void OnNavigationButtonPressed(const int32 InButtonIndex);
    
};

