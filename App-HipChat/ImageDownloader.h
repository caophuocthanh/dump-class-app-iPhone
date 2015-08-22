//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, ThreadSafeDictionary;

@interface ImageDownloader : NSObject
{
    NSOperationQueue *_downloadQueue;
    ThreadSafeDictionary *_pendingDownloads;
    NSObject<OS_dispatch_queue> *_completionProcessingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionProcessingQueue; // @synthesize completionProcessingQueue=_completionProcessingQueue;
@property(retain, nonatomic) ThreadSafeDictionary *pendingDownloads; // @synthesize pendingDownloads=_pendingDownloads;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (void)imageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
