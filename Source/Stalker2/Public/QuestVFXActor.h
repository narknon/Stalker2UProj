#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GuidInterface.h"
#include "QuestVFXActor.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AQuestVFXActor : public AActor, public IGuidInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    AQuestVFXActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

