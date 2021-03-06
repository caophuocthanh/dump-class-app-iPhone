//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNCDNAssetURLCache, MNCDNAssetURLFetcher, NSObject<OS_dispatch_queue>;

@interface MNCDNAssetURLResolver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    MNCDNAssetURLCache *_urlCache;
    MNCDNAssetURLFetcher *_urlFetcher;
}

- (void).cxx_destruct;
- (void)_fetchUrlDidSucceedForAssetIdentifier:(id)arg1 url:(id)arg2 success:(CDUnknownBlockType)arg3;
- (void)_fetchUrlForAssetIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_didFinishFetchingCachedUrl:(id)arg1 fromAssetIdentifier:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)resolveUrlForAssetIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 urlCache:(id)arg2 urlFetcher:(id)arg3;

@end

