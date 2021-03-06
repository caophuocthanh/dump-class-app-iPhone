//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebImageDownloader.h"

@class FBCache, FBWebImageAssetGenerator, NSString, NSURL;

@interface FBWebImageAssetDownloader : NSObject <FBWebImageDownloader>
{
    FBCache *_cache;
    NSURL *_lastAssetURL;
    FBWebImageAssetGenerator *_assetGenerator;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 downloadBlock:(CDUnknownBlockType)arg4;
- (id)initWithCache:(id)arg1 assetGenerator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

