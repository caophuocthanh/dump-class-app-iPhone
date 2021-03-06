//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_EventIndexingModeEnum, ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_LocalStoreEnum, ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_WorkerTypeEnum, ComGoogleCalendarV2CommonProtoCalendarProto_PlatformEnum, NSString;

@protocol ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettingsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getUsePreemptivePriority;
- (BOOL)hasUsePreemptivePriority;
- (BOOL)getUseCumulusBoostableQueue;
- (BOOL)hasUseCumulusBoostableQueue;
- (BOOL)getUseMultiPassEventQueryRunner;
- (BOOL)hasUseMultiPassEventQueryRunner;
- (BOOL)getFillInstantsInEventsObjectInfo;
- (BOOL)hasFillInstantsInEventsObjectInfo;
- (BOOL)getUseExactTimeZoneOffsetInAgendaQuery;
- (BOOL)hasUseExactTimeZoneOffsetInAgendaQuery;
- (BOOL)getUseServiceWorkerThread;
- (BOOL)hasUseServiceWorkerThread;
- (BOOL)getEnableSplitIndexForAgendaQuery;
- (BOOL)hasEnableSplitIndexForAgendaQuery;
- (BOOL)getEnableSplitIndexForRangeQuery;
- (BOOL)hasEnableSplitIndexForRangeQuery;
- (ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_EventIndexingModeEnum *)getEventIndexingMode;
- (BOOL)hasEventIndexingMode;
- (BOOL)getEnableOptimisticLocalResultsWhileIndexing;
- (BOOL)hasEnableOptimisticLocalResultsWhileIndexing;
- (BOOL)getEventQueriesUsePreviousConstraints;
- (BOOL)hasEventQueriesUsePreviousConstraints;
- (int)getSysTraceDumpIntervalMs;
- (BOOL)hasSysTraceDumpIntervalMs;
- (BOOL)getEnableSysTraces;
- (BOOL)hasEnableSysTraces;
- (BOOL)getEnableAclSync;
- (BOOL)hasEnableAclSync;
- (BOOL)getLocalOnlyQueryForSyncedEvents;
- (BOOL)hasLocalOnlyQueryForSyncedEvents;
- (int)getWriteBufferSize;
- (BOOL)hasWriteBufferSize;
- (BOOL)getEnableThreadGuards;
- (BOOL)hasEnableThreadGuards;
- (BOOL)getOnlyLocalQueriesForTest;
- (BOOL)hasOnlyLocalQueriesForTest;
- (BOOL)getReportSevereLogMessages;
- (BOOL)hasReportSevereLogMessages;
- (BOOL)getEnableSpanRecordConsole;
- (BOOL)hasEnableSpanRecordConsole;
- (NSString *)getBrowserPushGatewayUrl;
- (BOOL)hasBrowserPushGatewayUrl;
- (NSString *)getBrowserPushChannelUrl;
- (BOOL)hasBrowserPushChannelUrl;
- (BOOL)getSyncBrowserUsingPushNotifications;
- (BOOL)hasSyncBrowserUsingPushNotifications;
- (int)getSyncStartupDelayMs;
- (BOOL)hasSyncStartupDelayMs;
- (NSString *)getIdKey;
- (BOOL)hasIdKey;
- (BOOL)getRecordTimelyMetricsOnly;
- (BOOL)hasRecordTimelyMetricsOnly;
- (NSString *)getXsrfToken;
- (BOOL)hasXsrfToken;
- (NSString *)getCrossStackDiagnostics;
- (BOOL)hasCrossStackDiagnostics;
- (BOOL)getGradualSync;
- (BOOL)hasGradualSync;
- (BOOL)getAllowMemoryStoreLocalUpdatesForTest;
- (BOOL)hasAllowMemoryStoreLocalUpdatesForTest;
- (BOOL)getSyncUsingPushNotifications;
- (BOOL)hasSyncUsingPushNotifications;
- (BOOL)getAllowRangeWrites;
- (BOOL)hasAllowRangeWrites;
- (int)getBuildChangelist;
- (BOOL)hasBuildChangelist;
- (BOOL)getTimelyReminders;
- (BOOL)hasTimelyReminders;
- (NSString *)getMultiLoginPath;
- (BOOL)hasMultiLoginPath;
- (int)getMetricsMemoryCache;
- (BOOL)hasMetricsMemoryCache;
- (BOOL)getLongLivedClient;
- (BOOL)hasLongLivedClient;
- (ComGoogleCalendarV2CommonProtoCalendarProto_PlatformEnum *)getPlatform;
- (BOOL)hasPlatform;
- (int)getClientVersionOverride;
- (BOOL)hasClientVersionOverride;
- (int)getWorkerVersionOverride;
- (BOOL)hasWorkerVersionOverride;
- (NSString *)getClientDeviceIdentifier;
- (BOOL)hasClientDeviceIdentifier;
- (NSString *)getClientVersion;
- (BOOL)hasClientVersion;
- (int)getClientBuildNumber;
- (BOOL)hasClientBuildNumber;
- (NSString *)getUserAgent;
- (BOOL)hasUserAgent;
- (int)getBackgroundRequestStartupDelayMs;
- (BOOL)hasBackgroundRequestStartupDelayMs;
- (int)getMaxObjectsPerPage;
- (BOOL)hasMaxObjectsPerPage;
- (long long)getQueryBucketSizeMs;
- (BOOL)hasQueryBucketSizeMs;
- (NSString *)getUserId;
- (BOOL)hasUserId;
- (NSString *)getBigtopWorkerUrl;
- (BOOL)hasBigtopWorkerUrl;
- (NSString *)getBigtopLogLevel;
- (BOOL)hasBigtopLogLevel;
- (ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_WorkerTypeEnum *)getBigtopWorkerType;
- (BOOL)hasBigtopWorkerType;
- (NSString *)getWorkerUrl;
- (BOOL)hasWorkerUrl;
- (ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_WorkerTypeEnum *)getWorkerType;
- (BOOL)hasWorkerType;
- (ComGoogleCalendarV2CommonProtoCalendarProto_ClientApiSettings_LocalStoreEnum *)getLocalStore;
- (BOOL)hasLocalStore;
- (int)getMaxObjectsPerSyncRequest;
- (BOOL)hasMaxObjectsPerSyncRequest;
- (int)getSyncBucketsBehind;
- (BOOL)hasSyncBucketsBehind;
- (int)getSyncBucketsAhead;
- (BOOL)hasSyncBucketsAhead;
- (BOOL)getEagerClientUpdates;
- (BOOL)hasEagerClientUpdates;
- (int)getMaxObjectsPerQuery;
- (BOOL)hasMaxObjectsPerQuery;
- (int)getMaxObjectCountLocalQuery;
- (BOOL)hasMaxObjectCountLocalQuery;
- (int)getMaxObjectCountPollingCycle;
- (BOOL)hasMaxObjectCountPollingCycle;
- (int)getPollingIntervalMs;
- (BOOL)hasPollingIntervalMs;
- (NSString *)getIndexeddbDatabasePath;
- (BOOL)hasIndexeddbDatabasePath;
- (NSString *)getIndexeddbDatabaseName;
- (BOOL)hasIndexeddbDatabaseName;
@end

