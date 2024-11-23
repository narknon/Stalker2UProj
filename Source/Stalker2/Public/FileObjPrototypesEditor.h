#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FileObjPrototypesEditor.generated.h"

class UObjPrototypeEditor;

UCLASS(Blueprintable)
class STALKER2_API UFileObjPrototypesEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObjPrototypeEditor*> ObjPrototypes;
    
public:
    UFileObjPrototypesEditor();

};

