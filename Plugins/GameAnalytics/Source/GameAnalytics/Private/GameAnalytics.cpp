#include "GameAnalytics.h"

UGameAnalytics::UGameAnalytics() {
}

void UGameAnalytics::SetCustomDimension03(const FString& CustomDimension) {
}

void UGameAnalytics::SetCustomDimension02(const FString& CustomDimension) {
}

void UGameAnalytics::SetCustomDimension01(const FString& CustomDimension) {
}

void UGameAnalytics::OnQuit() {
}

bool UGameAnalytics::IsRemoteConfigsReady() {
    return false;
}

FString UGameAnalytics::GetRemoteConfigsValueAsStringWithDefaultValue(const FString& Key, const FString& DefaultValue) {
    return TEXT("");
}

FString UGameAnalytics::GetRemoteConfigsValueAsString(const FString& Key) {
    return TEXT("");
}

FString UGameAnalytics::GetRemoteConfigsContentAsString() {
    return TEXT("");
}

FString UGameAnalytics::GetABTestingVariantId() {
    return TEXT("");
}

FString UGameAnalytics::GetABTestingId() {
    return TEXT("");
}

void UGameAnalytics::AddResourceEventWithMergeFields(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddResourceEventWithFields(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddResourceEvent(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneScoreAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02) {
}

void UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOneAndMergeFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOneAndFields(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const FString& Progression01) {
}

void UGameAnalytics::AddErrorEventWithMergeFields(EGAErrorSeverity Severity, const FString& message, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddErrorEventWithFields(EGAErrorSeverity Severity, const FString& message, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddErrorEvent(EGAErrorSeverity Severity, const FString& message) {
}

void UGameAnalytics::AddDesignEventWithValueAndMergeFields(const FString& EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddDesignEventWithValueAndFields(const FString& EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddDesignEventWithValue(const FString& EventId, float Value) {
}

void UGameAnalytics::AddDesignEventWithMergeFields(const FString& EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddDesignEventWithFields(const FString& EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddDesignEvent(const FString& EventId) {
}

void UGameAnalytics::AddBusinessEventWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventIOSWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventIOSWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventIOS(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt) {
}

void UGameAnalytics::AddBusinessEventAndroidWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventAndroidWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventAndroid(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature) {
}

void UGameAnalytics::AddBusinessEventAndAutoFetchReceiptWithMergeFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventAndAutoFetchReceiptWithFields(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType) {
}

void UGameAnalytics::AddBusinessEvent(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType) {
}

void UGameAnalytics::AddAdEventWithNoAdReasonAndMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithNoAdReasonAndFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason) {
}

void UGameAnalytics::AddAdEventWithMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithDurationAndMergeFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithDurationAndFields(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields) {
}

void UGameAnalytics::AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration) {
}

void UGameAnalytics::AddAdEvent(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement) {
}


