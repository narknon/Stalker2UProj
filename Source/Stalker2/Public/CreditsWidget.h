#pragma once
#include "CoreMinimal.h"
#include "RoleDisplaySettings.h"
#include "SectionTitleDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "CreditsWidget.generated.h"

class UCreditsNamesWidget;
class UCreditsRoleWidget;
class UCreditsSectionTitle;
class UCreditsSpacer;
class UOverlay;
class UScrollBox;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCreditsWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* CreditsScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CreditsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsSpacer> SpacerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsSectionTitle> CreditsSectionTitleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsRoleWidget> CreditsRoleTitleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsNamesWidget> CreditsNamesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AppearAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSectionTitleDisplaySettings SectionTitleDisplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoleDisplaySettings FirstRoleDisplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoleDisplaySettings RoleDisplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditsScrollMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditsScrollUserMultiplier;
    
public:
    UCreditsWidget();

};

