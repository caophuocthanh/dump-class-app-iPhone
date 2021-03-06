//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanEventReceiver.h"
#import "JavaLangRunnable.h"

@class ComGoogleCumulusCommonMetric2NetSpanEventsMergingDispatcher_Factory, NSString;

@interface ComGoogleCumulusCommonMetric2ClientToWorkerSpanEventPusher : NSObject <ComGoogleCumulusCommonMetric2SpanEventReceiver, JavaLangRunnable>
{
    id <JCGCuDelayedWorkQueue> workQueue_;
    id <ComGoogleCumulusCommonMetric2SpanEventsSink> sink_;
    ComGoogleCumulusCommonMetric2NetSpanEventsMergingDispatcher_Factory *mergingDispatcherFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (void)run;
- (void)acceptWithId:(id)arg1;
- (id)initWithComGoogleCumulusCommonMetric2SpanEventsSink:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withComGoogleCumulusCommonMetric2NetSpanEventsMergingDispatcher_Factory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

