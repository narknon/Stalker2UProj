#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "EWidgetNameEx.h"
#include "UIBaseManager.generated.h"

class UAkAudioEvent;
class UViewBase;
class UWaterElement;

UCLASS(Blueprintable)
class STALKER2_API UUIBaseManager : public UBaseManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<EWidgetNameEx, TWeakObjectPtr<UViewBase>> AllWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UViewBase*> OpenViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UViewBase*> OpenViewsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterElement* WaterElementWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LastAudioEvent;
    
public:
    UUIBaseManager();

};

