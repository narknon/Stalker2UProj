#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "SafeZoneWidget.generated.h"

class UImageWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USafeZoneWidget : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* LeftTopCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* RightTopCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* LeftDownCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* RightDownCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* Border;
    
public:
    USafeZoneWidget();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void HandleEditSafeZoneMoveBordersIncreaseWidth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HandleEditSafeZoneMoveBordersIncreaseHeight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HandleEditSafeZoneMoveBordersDecreaseWidth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HandleEditSafeZoneMoveBordersDecreaseHeight();
    
};

