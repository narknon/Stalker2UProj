#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomDataEditor.generated.h"

class UEditorMaterialParameterConfig;

UCLASS(Blueprintable)
class STALKER2_API UCustomDataEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockedInVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEditorMaterialParameterConfig*> MaterialParameterConfigs;
    
public:
    UCustomDataEditor();

};

