//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBResponseHandling.h"

@class FBProgressiveJPEG, NSData, NSString, NSURL;

@interface FBStreamingImageResponseHandler : NSObject <FBResponseHandling>
{
    id <FBImageDownloaderCache> _imageCache;
    BOOL _adjustPartialCache;
    FBProgressiveJPEG *_jpeg;
    NSURL *_url;
    NSData *_partialData;
    int _contentLength;
    BOOL _reachedLastImageFlag;
    BOOL _needCachePartialData;
    BOOL _sentFinalResponse;
    id <FBRequest> _request;
    id <FBResponseHandlerDelegate> _delegate;
    id <FBStreamingImageResponseHandlerDelegate> _streamingDelegate;
}

+ (id)copyImageWithNewImageFlag:(id)arg1 imageFlag:(unsigned int)arg2 lastImageFlag:(BOOL)arg3;
+ (id)getBestImageForPartialData:(id)arg1 desiredFlag:(unsigned int)arg2;
@property(nonatomic) __weak id <FBStreamingImageResponseHandlerDelegate> streamingDelegate; // @synthesize streamingDelegate=_streamingDelegate;
@property(nonatomic) __weak id <FBResponseHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cachePartialDataIfNeeded;
- (void)abort;
- (void)close;
- (void)handleData:(id)arg1;
- (void)open;
- (id)initWithRequest:(id)arg1 url:(id)arg2 partialData:(id)arg3 contentLength:(int)arg4 imageCache:(id)arg5 adjustPartialCache:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
