#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGAAdAction.h"
#include "EGAAdError.h"
#include "EGAAdType.h"
#include "EGAErrorSeverity.h"
#include "EGAProgressionStatus.h"
#include "EGAResourceFlowType.h"
#include "GameAnalyticsCustomEventField.h"
#include "GameAnalytics.generated.h"

UCLASS(Blueprintable)
class GAMEANALYTICS_API UGameAnalytics : public UObject {
    GENERATED_BODY()
public:
    UGameAnalytics();

    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension03(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension02(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension01(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void OnQuit();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRemoteConfigsReady();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsValueAsStringWithDefaultValue(const FString& Key, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsValueAsString(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsContentAsString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetABTestingVariantId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetABTestingId();
    
    UFUNCTION(BlueprintCallable)
    static void AddResourceEventWithMergeFields(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddResourceEventWithFields(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddResourceEvent(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const FString& Progression01);
    
    UFUNCTION(BlueprintCallable)
    static void AddErrorEventWithMergeFields(EGAErrorSeverity Severity, const FString& message, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddErrorEventWithFields(EGAErrorSeverity Severity, const FString& message, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddErrorEvent(EGAErrorSeverity Severity, const FString& message);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithValueAndMergeFields(const FString& EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithValueAndFields(const FString& EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithValue(const FString& EventId, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithMergeFields(const FString& EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithFields(const FString& EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEvent(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventIOSWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventIOSWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventIOS(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndroidWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndroidWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndroid(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndAutoFetchReceiptWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndAutoFetchReceiptWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndAutoFetchReceipt(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEvent(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithNoAdReasonAndMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithNoAdReasonAndFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithDurationAndMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithDurationAndFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEvent(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement);
    
};

