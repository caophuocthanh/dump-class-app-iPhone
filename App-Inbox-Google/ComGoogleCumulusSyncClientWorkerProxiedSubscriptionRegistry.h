//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonUtilEventBus.h"

#import "ComGoogleCumulusSyncClientProxiedSubscriptionRegistry.h"

@class NSString;

@interface ComGoogleCumulusSyncClientWorkerProxiedSubscriptionRegistry : ComGoogleCumulusCommonUtilEventBus <ComGoogleCumulusSyncClientProxiedSubscriptionRegistry>
{
    id <ComGoogleCumulusCommonSubscriptions> subRegistry_;
    BOOL initialized_;
    id <ComGoogleCumulusCommonSubscriptions_ChangeHandler> currentChangeHandler_;
}

- (void)dealloc;
- (id)buildResponseWithComGoogleCumulusSyncSubscriptionsProto_SubscriptionChange:(id)arg1;
- (id)protoStatusFromSubscriptionStatusWithNSString:(id)arg1 withComGoogleCumulusCommonSubscriptions_SubscriptionStatus:(id)arg2;
- (id)produceInitializeResponse;
- (void)postSyncStatus;
- (void)metadataResyncWithJavaUtilCollection:(id)arg1;
- (void)resumeSync;
- (void)pauseSync;
- (void)stopSync;
- (void)triggerSyncIterationWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withComGoogleCumulusApiMetricsAppContext:(id)arg3 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg4;
- (void)triggerSyncWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withComGoogleCumulusApiMetricsAppContext:(id)arg3 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg4;
- (void)triggerSyncWithInt:(int)arg1 withComGoogleCumulusApiMetricsAppContext:(id)arg2 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg3;
- (void)checkForNewDataWithJavaUtilCollection:(id)arg1;
- (void)removeSubscriptionWithNSString:(id)arg1;
- (BOOL)addSubscriptionWithComGoogleCumulusQueryQueryProto_Subscription:(id)arg1;
- (void)setSubscriptionNotificationStateWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Subscription_NotificationStateEnum:(id)arg2;
- (void)removeReceiverWithComGoogleCommonBaseReceiver:(id)arg1;
- (void)addReceiverWithComGoogleCommonBaseReceiver:(id)arg1;
- (id)initWithComGoogleCumulusCommonSubscriptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

