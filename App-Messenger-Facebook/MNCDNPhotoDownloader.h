//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNCDNPhotoDownloadRunnerListening.h"

@class MNAdaptiveImageDownloader, MNAsyncOperationTracker, NSString;

@interface MNCDNPhotoDownloader : NSObject <FBSessionClassProvidable, MNCDNPhotoDownloadRunnerListening>
{
    id <MNCDNAssetDownloading> _assetDownloader;
    MNAdaptiveImageDownloader *_adaptiveImageDownloader;
    MNAsyncOperationTracker *_asynOperationTracker;
}

- (void).cxx_destruct;
- (void)photoRunnerDidFailToDownloadPhotoWithError:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(long long)arg3;
- (void)photoRunnerDidFinishWithPhoto:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(long long)arg3 isFinalResponse:(BOOL)arg4;
- (void)cancelDownloadForDownloadId:(id)arg1;
- (id)downloadPhotoForPhotoDownloadRequest:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAssetDownloader:(id)arg1 adaptiveImageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

