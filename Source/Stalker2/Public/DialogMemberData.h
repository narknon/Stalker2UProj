#pragma once
#include "CoreMinimal.h"
#include "DialogMemberData.generated.h"

USTRUCT(BlueprintType)
struct FDialogMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DialogMemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptionalMember;
    
    STALKER2_API FDialogMemberData();
};

