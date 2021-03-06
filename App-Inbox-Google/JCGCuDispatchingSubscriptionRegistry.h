//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonUtilEventBus.h"

#import "ComGoogleCumulusSyncClientProxiedSubscriptionRegistry.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, JCGCuDispatchingSubscriptionRegistry_SyncResponseReceiver, NSString;

@interface JCGCuDispatchingSubscriptionRegistry : ComGoogleCumulusCommonUtilEventBus <ComGoogleCumulusSyncClientProxiedSubscriptionRegistry>
{
    int lastTriggerSyncCallbackId_;
    id <JavaUtilMap> triggeredSyncCallbacks_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> syncAbortBus_;
    id <ComGoogleCommonBaseReceiver> syncAbortReceiver_;
    JCGCuDispatchingSubscriptionRegistry_SyncResponseReceiver *syncResponseReceiver_;
    id <ComGoogleCumulusCommonNetDispatcher> dispatcher_;
    id <JCGCuDelayedWorkQueue> workQueue_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_syncResponseReceiver_;
+ (id)__annotations_triggerSyncImplWithJavaUtilCollection_withInt_withComGoogleCumulusApiMetricsAppContext_withBoolean_withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback__params;
+ (void)initialize;
- (void)dealloc;
- (void)dispatchRequestWithComGoogleCumulusSyncSubscriptionsProto_Request:(id)arg1;
- (int)getTriggerdSyncCallbackCount;
- (BOOL)hasChangeUpdateReceivers;
- (void)addSyncResponseReceiver;
- (void)triggerSyncImplWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withComGoogleCumulusApiMetricsAppContext:(id)arg3 withBoolean:(BOOL)arg4 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg5;
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
- (void)dispose;
- (id)initWithComGoogleCumulusCommonNetDispatcher:(id)arg1 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg2 withJCGCuDelayedWorkQueue:(id)arg3 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

