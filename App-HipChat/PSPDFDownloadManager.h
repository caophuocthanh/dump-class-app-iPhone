//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDownloadDelegate.h"

@class CTTelephonyNetworkInfo, NSArray, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLSession, PSPDFFileCache, PSPDFReachabilityObserver;

@interface PSPDFDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSMutableOrderedSet *_waitingObjects;
    NSMutableOrderedSet *_loadingObjectContainers;
    NSMutableOrderedSet *_failedObjects;
    NSURLSession *_session;
    NSOperationQueue *_postProcessOperationQueue;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    PSPDFReachabilityObserver *_reachabilityObserver;
    unsigned int _numberOfConcurrentDownloads;
    CTTelephonyNetworkInfo *_wwanNetworkInfo;
    BOOL _enableDynamicNumberOfConcurrentDownloads;
    BOOL _shouldFinishLoadingObjectsInBackground;
    PSPDFFileCache *_cache;
    unsigned int _reachability;
    id <PSPDFDownloadManagerDelegate> _delegateProxy;
    id <PSPDFFileManager> _fileManager;
    id <PSPDFDownloadManagerPolicy> _downloadManagerPolicy;
}

@property(readonly, nonatomic) id <PSPDFDownloadManagerPolicy> downloadManagerPolicy; // @synthesize downloadManagerPolicy=_downloadManagerPolicy;
@property(readonly, nonatomic) id <PSPDFFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <PSPDFDownloadManagerDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) unsigned int reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) PSPDFFileCache *cache; // @synthesize cache=_cache;
@property(nonatomic) BOOL shouldFinishLoadingObjectsInBackground; // @synthesize shouldFinishLoadingObjectsInBackground=_shouldFinishLoadingObjectsInBackground;
@property(nonatomic) BOOL enableDynamicNumberOfConcurrentDownloads; // @synthesize enableDynamicNumberOfConcurrentDownloads=_enableDynamicNumberOfConcurrentDownloads;
- (void).cxx_destruct;
- (id)temporaryDirectoryForIdentifier:(id)arg1;
- (void)releaseDownloadFileWithIdentifier:(id)arg1;
- (id)captureDownloadFileAtLocation:(id)arg1 withIdentifier:(id)arg2;
- (id)postProcessOperationForContainer:(id)arg1 fileIdentifier:(id)arg2 fileLocation:(id)arg3;
- (void)didCompleteContainer:(id)arg1 withError:(id)arg2;
- (void)didCompleteContainer:(id)arg1 withFileLocation:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (id)containerForURLSessionTask:(id)arg1;
- (void)radioAccessTechnologyDidChangeNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)reachabilityDidChangeNotification:(id)arg1;
- (id)containerForLoadingObject:(id)arg1;
- (void)fetchContentForObjectFromRemoteLocation:(id)arg1;
- (void)cleanUpContainerBackgroundTask:(id)arg1;
- (void)fetchContentForObjectFromCache:(id)arg1;
- (void)queuesDidChange;
- (BOOL)shouldCacheRemoteObject:(id)arg1;
- (void)setQueuesDidChange;
- (void)cancelAllObjects;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (void)iterateAllObjects:(CDUnknownBlockType)arg1;
- (void)cancelObject:(id)arg1;
- (void)enqueueObjects:(id)arg1 atFront:(BOOL)arg2;
- (void)enqueueObjects:(id)arg1;
- (void)enqueueObject:(id)arg1 atFront:(BOOL)arg2;
- (void)enqueueObject:(id)arg1;
@property(nonatomic) unsigned int numberOfConcurrentDownloads;
- (unsigned int)stateForObject:(id)arg1;
- (BOOL)handlesObject:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *failedObjects;
@property(readonly, copy, nonatomic) NSArray *loadingObjects;
@property(readonly, copy, nonatomic) NSArray *waitingObjects;
- (void)setUpObjectQueues;
- (void)setFileCache:(id)arg1;
- (void)setUpNetworkInformation;
- (void)setUpReachability;
- (void)setUpPostProcessOperationQueue;
- (void)setUpSession;
- (void)setUpDefaultPropertyValues;
- (void)setUpBackgroundTaskQueue;
- (void)setUpAppStateNotifications;
- (id)initWithFileCache:(id)arg1 fileManager:(id)arg2 downloadManagerPolicy:(id)arg3;
- (id)init;
- (void)dealloc;
@property(nonatomic) __weak id <PSPDFDownloadManagerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

