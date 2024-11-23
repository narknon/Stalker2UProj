#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GroomCategoryEditor.generated.h"

class UGroomEditor;

UCLASS(Blueprintable)
class STALKER2_API UGroomCategoryEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGroomEditor*> Variations;
    
public:
    UGroomCategoryEditor();

};

