#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjPrototypeEditor.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UObjPrototypeEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemGeneratorSID;
    
public:
    UObjPrototypeEditor();

};

