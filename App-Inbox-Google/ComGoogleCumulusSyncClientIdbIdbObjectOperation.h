//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonIndexDocIdUtil_DocId, ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusFrameworkStoreProto_StoredObject, ComGoogleCumulusSyncClientIdbIdbIndexProcessor, ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata, ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager, ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager_Waiter, ComGoogleCumulusSyncClientIdbTaskQueue, ComGoogleCumulusSyncClientIdbTaskQueue_FutureWorkTask, ComGoogleCumulusSyncClientObjectUpdate, IOSIntArray, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectOperation : NSObject
{
    NSString *soid_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonIndexIdbAdapter> idbAdapter_;
    ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata *metadata_;
    ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager *sharedTransactionManager_;
    id <ComGoogleCumulusApiPluginSlicer> slicer_;
    id <ComGoogleCumulusCommonIndexAsyncIndexer> indexer_;
    id <ComGoogleCumulusSyncClientIndexPreprocessor> indexPreprocessor_;
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor *indexProcessor_;
    id <JavaUtilCollection> optimizedSliceGroups_;
    id <ComGoogleCumulusCommonSubscriptions> subscriptionAccessor_;
    id <JavaUtilMap> fields_;
    id <JCGCuMultiOperationWatchdog> watchdog_;
    NSString *operationId_;
    ComGoogleCumulusSyncClientIdbTaskQueue *commitQueue_;
    id <ComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler> handler_;
    NSString *readStore_;
    BOOL skipNextReadResult_;
    id <JavaUtilList> loadCallbacks_;
    ComGoogleCumulusSyncClientObjectUpdate *update_;
    ComGoogleCumulusFrameworkStoreProto_StoredObject *storedObject_;
    id <JavaUtilList> writeCallbacks_;
    BOOL delete__;
    BOOL reindex_;
    BOOL active_;
    IOSIntArray *docId_;
    ComGoogleCumulusCommonIndexDocIdUtil_DocId *docIdPojo_;
    id <ComGoogleCumulusApiMetricsSpan> deleteSpan_;
    id <ComGoogleCumulusApiMetricsSpan> updateSpan_;
    id <ComGoogleCumulusApiMetricsSpan> loadSpan_;
    int priority_;
    ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager_Waiter *currentWaiter_;
    IOSIntArray *oldDocId_;
    ComGoogleCumulusSyncClientIdbTaskQueue_FutureWorkTask *fenceTask_;
}

+ (void)initialize;
- (void)dealloc;
- (void)assignNewEntityId;
- (void)issueDeleteWithTxWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;
- (void)issueDelete;
- (void)postTokenizeWriteWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1 withComGoogleCumulusSyncClientObjectUpdate:(id)arg2 withComGoogleCumulusCommonIndexIndexProto_CustomValue_Builder:(id)arg3 withComGoogleCumulusFrameworkStoreProto_StoredObject:(id)arg4;
- (void)tokenizeWithComGoogleCumulusTypeTypeProto_Command:(id)arg1 withJavaUtilSet:(id)arg2 withJavaUtilList:(id)arg3 withInt:(int)arg4 withComGoogleCommonBaseReceiver:(id)arg5;
- (void)issueReindexingWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1;
- (void)issueWriteWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg2;
- (id)sliceCustomValueWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1 withJavaUtilSet:(id)arg2;
- (void)issueReadWithTxWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;
- (void)issueRead;
- (void)onComplete;
- (BOOL)notComplete;
- (void)maybeComplete;
- (void)onDeleteCompleted;
- (void)onWriteCompleted;
- (void)callLoadCallbackWithStoredObjectWithComGoogleCumulusFrameworkStoreProto_StoredObject:(id)arg1;
- (void)onReadCompletedWithTxWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg2;
- (void)onReadCompletedWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1;
- (void)startWithNSString:(id)arg1;
- (void)restart;
- (void)markProgressWithNSString:(id)arg1;
- (id)description;
- (void)upgradeReadStoreIfNeededWithNSString:(id)arg1;
- (void)reindex;
- (void)doDeleteWithJavaLangRunnable:(id)arg1;
- (void)doWriteWithComGoogleCumulusSyncClientObjectUpdate:(id)arg1 withJavaLangRunnable:(id)arg2;
- (void)doReadWithComGoogleCumulusApiTypeObjectLoader_LoadCallback:(id)arg1 withNSString:(id)arg2;
- (BOOL)isWrite;
- (void)setPriorityWithInt:(int)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg3 withComGoogleCumulusCommonIndexIdbAdapter:(id)arg4 withComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata:(id)arg5 withComGoogleCumulusSyncClientIdbIdbSharedTransactionManager:(id)arg6 withComGoogleCumulusApiPluginSlicer:(id)arg7 withComGoogleCumulusCommonIndexAsyncIndexer:(id)arg8 withComGoogleCumulusSyncClientIndexPreprocessor:(id)arg9 withComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg10 withJavaUtilCollection:(id)arg11 withComGoogleCumulusCommonSubscriptions:(id)arg12 withJavaUtilMap:(id)arg13 withJCGCuMultiOperationWatchdog:(id)arg14 withComGoogleCumulusSyncClientIdbTaskQueue:(id)arg15 withComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler:(id)arg16 withInt:(int)arg17;

@end

