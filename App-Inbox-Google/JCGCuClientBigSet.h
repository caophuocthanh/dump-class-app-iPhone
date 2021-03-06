//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiBigSet.h"
#import "ComGoogleCumulusApiResourceCounter.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonNetProto_Request_Builder, ComGoogleCumulusCommonUtilEventBus, ComGoogleCumulusFrameworkObjectHandleManager_Client, ComGoogleCumulusFrameworkPreloadedResultsCaptor, ComGoogleCumulusFrameworkQueryManager, ComGoogleCumulusQueryClientResultPreloader, ComGoogleCumulusSyncClientCommandProtoHandler, JCGCuClientBatchManager, NSString;

@interface JCGCuClientBigSet : NSObject <ComGoogleCumulusApiBigSet, ComGoogleCumulusApiResourceCounter>
{
    ComGoogleCumulusFrameworkQueryManager *queryManager_;
    ComGoogleCumulusFrameworkObjectHandleManager_Client *objectHandleManager_;
    JCGCuClientBatchManager *batchManager_;
    ComGoogleCumulusSyncClientCommandProtoHandler *commandProtoHandler_;
    id <ComGoogleCumulusCommonNetDispatcher> dispatcher_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    ComGoogleCumulusCommonUtilEventBus *netStateEventBus_;
    id <JCGCuDelayedWorkQueue> workQueue_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id wqMutex_;
    ComGoogleCumulusCommonNetProto_Request_Builder *pendingRequest_;
    id <JavaUtilList> pendingDispatchSpans_;
    ComGoogleCumulusFrameworkPreloadedResultsCaptor *preloadedResultsCaptor_;
    ComGoogleCumulusQueryClientResultPreloader *resultPreloader_;
    int numClientQueries_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_resultPreloader_;
+ (id)__annotations_preloadedResultsCaptor_;
+ (id)__annotations_dispatchRequestWithComGoogleCumulusCommonNetProto_Request_Builder_withComGoogleCumulusApiMetricsSpan__params;
+ (id)__annotations_initWithComGoogleCumulusFrameworkQueryManager_withComGoogleCumulusFrameworkObjectHandleManager_Client_withJCGCuClientBatchManager_withComGoogleCumulusSyncClientCommandProtoHandler_withComGoogleCumulusCommonNetDispatcher_withComGoogleCumulusCommonMetric2SpanHelper_withComGoogleCumulusCommonUtilEventBus_withJCGCuDelayedWorkQueue_withComGoogleCumulusCommonUtilClock_withComGoogleCumulusFrameworkPreloadedResultsCaptor_withComGoogleCumulusQueryClientResultPreloader__params;
+ (void)initialize;
+ (id)toCompletedStatusWithComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg1;
- (void)dealloc;
- (void)dispatchRequestWithComGoogleCumulusCommonNetProto_Request_Builder:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2;
- (void)dispatchRequestWithComGoogleCumulusCommonNetProto_Request_Builder:(id)arg1;
- (BOOL)flushRequests;
- (id)deserializeObjectHandleWithNSString:(id)arg1;
- (id)createRemoteBatch;
- (id)createBatch;
- (id)createQueryWithComGoogleCumulusApiQueryObserver:(id)arg1 withComGoogleCumulusApiQuerySettings:(id)arg2;
- (int)getActiveResourceCount;
- (id)initWithComGoogleCumulusFrameworkQueryManager:(id)arg1 withComGoogleCumulusFrameworkObjectHandleManager_Client:(id)arg2 withJCGCuClientBatchManager:(id)arg3 withComGoogleCumulusSyncClientCommandProtoHandler:(id)arg4 withComGoogleCumulusCommonNetDispatcher:(id)arg5 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg6 withComGoogleCumulusCommonUtilEventBus:(id)arg7 withJCGCuDelayedWorkQueue:(id)arg8 withComGoogleCumulusCommonUtilClock:(id)arg9 withComGoogleCumulusFrameworkPreloadedResultsCaptor:(id)arg10 withComGoogleCumulusQueryClientResultPreloader:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

