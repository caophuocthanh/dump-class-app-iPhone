//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonAppMessageProto_AppMessage, ComGoogleCumulusCommonNetProto_RequestContext, ComGoogleCumulusCommonWorkerControlProto_AppStateEnum, JavaUtilLoggingLevel;

@protocol ComGoogleCumulusApiClient <NSObject, JavaObject>
- (void)close;
- (void)setNetRequestContextWithComGoogleCumulusCommonNetProto_RequestContext:(ComGoogleCumulusCommonNetProto_RequestContext *)arg1 withJCGCuCallback:(id <JCGCuCallback>)arg2;
- (void)clearStartupResultCacheWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)writeStartupResultCacheWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)validateStoreWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)ensureIndexUpdatedWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)setAppStateWithComGoogleCumulusCommonWorkerControlProto_AppStateEnum:(ComGoogleCumulusCommonWorkerControlProto_AppStateEnum *)arg1;
- (void)shutDownWorkerWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)sendAppMessageWithComGoogleCumulusCommonAppMessageProto_AppMessage:(ComGoogleCumulusCommonAppMessageProto_AppMessage *)arg1;
- (void)requestUpdateWorker;
- (void)setLogLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)arg1;
- (id <ComGoogleCumulusCommonSubscriptions>)getSubscriptions;
- (void)logWorkerStatusWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getAppControlEventDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getRemoteBatchStatusDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getBatchErrorDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getWorkerIdDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getNetStateDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getNetworkLogDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getSyncStatusDispatcher;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getMetricsDispatcher;
- (id <ComGoogleCumulusApiMetricsCounterGroup_Factory>)getCountersFactory;
- (void)clearPreloadedResults;
- (void)flushMetrics;
- (id <ComGoogleCumulusApiMetricsSpan_Factory>)getSpanFactory;
- (id <JCGCuDelayedWorkQueue>)getDelayedWorkQueue;
- (id <ComGoogleCumulusCommonNetNetController>)getNetController;
- (void)checkForNewDataWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (void)checkForNewData;
- (id <ComGoogleCumulusApiBigSet>)newBigSet;
@end

