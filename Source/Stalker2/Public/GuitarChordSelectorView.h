#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "GuitarChordSelectorView.generated.h"

class UGuitarChordView;
class UHintInputController;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UGuitarChordSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintGuitarSwapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord1View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord2View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord3View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord4View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord5View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGuitarChordView* GuitarChord6View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGuitarChordView* HoveredChord;
    
    UGuitarChordSelectorView();

};

