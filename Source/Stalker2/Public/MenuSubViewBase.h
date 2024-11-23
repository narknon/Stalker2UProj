#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "TextProperties.h"
#include "MenuSubViewBase.generated.h"

class UMenuButtonBase;
class UMenuButtonModel;
class UPanelWidget;
class UScrollBox;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuSubViewBase : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* PauseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuButtonModel* MenuButtonModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextProperties TextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuButtonBase*> MenuOptionsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuButtonBase* SelectedButton;
    
public:
    UMenuSubViewBase();

    UFUNCTION(BlueprintCallable)
    void SelectOptionWidget(UMenuButtonBase* ButtonWidget);
    
};

