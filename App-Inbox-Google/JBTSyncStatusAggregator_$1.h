//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTPubSubHubObserver.h"

@class JBTSyncStatusAggregator;

@interface JBTSyncStatusAggregator_$1 : JBTPubSubHubObserver
{
    JBTSyncStatusAggregator *this$0_;
    id <JBTId> val$subscriptionId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTSyncStatusAggregator:(id)arg1 withJBTId:(id)arg2 withComGoogleAppsXplatPubsubPubSubHub:(id)arg3 withComGoogleAppsXplatPubsubTopic:(id)arg4 withJavaUtilConcurrentExecutor:(id)arg5;
- (void)onMessageWithId:(id)arg1;

@end

