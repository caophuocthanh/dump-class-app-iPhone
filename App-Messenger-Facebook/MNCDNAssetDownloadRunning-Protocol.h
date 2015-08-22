//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, NSURL;

@protocol MNCDNAssetDownloadRunning <NSObject>
- (void)cancelDownload;
- (void)initialURLResolutionDidFailWithError:(NSError *)arg1;
- (void)downloadAssetAtURL:(NSURL *)arg1 withDownloadId:(long long)arg2 withRetrier:(id <MNCDNAssetDownloadRunnerRetrying>)arg3 onQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end
