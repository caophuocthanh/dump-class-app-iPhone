//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBExponentialBackoffTimer, FBMQTTListener, MNSyncProtocolCoordinatorConfiguration, MNSyncProtocolDeltaRequester, MNSyncProtocolQueueRequester, MNSyncProtocolTokenStore, NSNotificationCenter, NSString;

@interface MNSyncProtocolCoordinator : NSObject <FBClassProvidable>
{
    BOOL _isConfigured;
    MNSyncProtocolCoordinatorConfiguration *_configuration;
    NSNotificationCenter *_notificationCenter;
    id <MNMQTTListenerManaging> _listenerManager;
    FBMQTTListener *_syncListener;
    MNSyncProtocolQueueRequester *_queueRequester;
    MNSyncProtocolDeltaRequester *_deltaRequester;
    MNSyncProtocolTokenStore *_tokenStore;
    FBExponentialBackoffTimer *_retrySyncBackoffTimer;
}

- (void).cxx_destruct;
- (void)_syncSucceeded;
- (void)_retrySyncWithExponentialBackoff;
- (void)_handleFetchDeltaFailed:(id)arg1;
- (void)_handleFetchDeltaSucceeded;
- (void)_handleGetPersistedSequenceIdFailedWithError:(id)arg1;
- (void)_handleGetPersistedSequenceIdSucceededWithSequenceId:(long long)arg1 andSyncToken:(id)arg2;
- (void)_fetchDeltaWithSyncToken:(id)arg1;
- (void)_handleRequestQueueFailedWithError:(id)arg1;
- (void)_handleRequestQueueSucceeded;
- (void)_handleFetchLatestSequenceIdAndSnapshotFailedWithError:(id)arg1;
- (void)_handleFetchLatestSequenceIdAndSnapshotSucceededWithSequenceId:(long long)arg1;
- (void)_performSnapshot;
- (void)_handlePayloadFailedWithError:(id)arg1;
- (void)_handlePayloadSucceeded;
- (void)_processErrorCodeFromPayload:(id)arg1;
- (void)_processSyncTokenFromPayload:(id)arg1;
- (void)_handleMQTTEncodedMessage:(id)arg1;
- (void)_unsubscribeFromSyncTopic;
- (void)_subscribeToSyncTopic;
- (void)_sync;
- (void)_onMQTTSubscribeToPatternNotification:(id)arg1;
- (void)reset;
- (void)stop;
- (void)start;
- (void)configure:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithQueueRequester:(id)arg1 deltaRequester:(id)arg2 notificationCenter:(id)arg3 mqttListenerManager:(id)arg4 tokenStore:(id)arg5 retrySyncBackOffTimer:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
