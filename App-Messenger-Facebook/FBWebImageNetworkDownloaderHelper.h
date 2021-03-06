//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebImageNetworkSpecifier, NSMutableDictionary;

@interface FBWebImageNetworkDownloaderHelper : NSObject
{
    id <FBWebImageNetworkDownloaderHelperDelegate> _delegate;
    NSMutableDictionary *_downloads;
    FBWebImageNetworkSpecifier *_specifier;
}

- (void).cxx_destruct;
- (void)_cancelDownloadForNode:(id)arg1;
- (void)_cancelDownloadsForNewSpecifier:(id)arg1;
- (id)_sortNodesByDescImageFlag:(id)arg1;
- (void)cancel;
- (void)handleDownloadResponse:(id)arg1 forDownloadNode:(id)arg2 specifier:(id)arg3 finished:(BOOL)arg4;
- (void)handleDownloadProgress:(float)arg1 forDownloadNode:(id)arg2;
- (void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 downloadBlock:(CDUnknownBlockType)arg4;
- (id)initWithDelegate:(id)arg1;

@end

