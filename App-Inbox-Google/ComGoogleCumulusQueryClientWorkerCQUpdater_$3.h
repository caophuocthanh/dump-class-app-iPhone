//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusQueryClientWorkerCQUpdater, ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum, NSString;

@interface ComGoogleCumulusQueryClientWorkerCQUpdater_$3 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusQueryClientWorkerCQUpdater *this$0_;
    int count_;
    id <JavaUtilCollection> val$queries_;
    id <JavaUtilList> val$matcherQueries_;
    id <JavaUtilList> val$matchUpdates_;
    ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum *val$syncSource_;
    id <ComGoogleCumulusApiMetricsSpan> val$parentSpan_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusQueryClientWorkerCQUpdater:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilList:(id)arg4 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

