//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURLSessionDataTask, PSPDFFileCache, PSPDFGalleryItemConfiguration, PSPDFGalleryItemResolver, PSPDFLinkAnnotation;

@interface PSPDFGalleryManifest : NSObject
{
    BOOL _loading;
    PSPDFLinkAnnotation *_linkAnnotation;
    PSPDFGalleryItemConfiguration *_sharedItemConfiguration;
    PSPDFFileCache *_fileCache;
    NSOperationQueue *_contentURLResolveQueue;
    PSPDFGalleryItemResolver *_itemResolver;
    NSURLSessionDataTask *_task;
}

@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) PSPDFGalleryItemResolver *itemResolver; // @synthesize itemResolver=_itemResolver;
@property(retain, nonatomic) NSOperationQueue *contentURLResolveQueue; // @synthesize contentURLResolveQueue=_contentURLResolveQueue;
@property(retain, nonatomic) PSPDFFileCache *fileCache; // @synthesize fileCache=_fileCache;
@property(retain, nonatomic) PSPDFGalleryItemConfiguration *sharedItemConfiguration; // @synthesize sharedItemConfiguration=_sharedItemConfiguration;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) PSPDFLinkAnnotation *linkAnnotation; // @synthesize linkAnnotation=_linkAnnotation;
- (void).cxx_destruct;
- (id)cachedRemoteManifestDataForAnnotation:(id)arg1;
- (void)setCachedRemoteManifestData:(id)arg1 forAnnotation:(id)arg2;
- (void)didFailToFetchRemoteManifestDataWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didFetchRemoteManifestData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchRemoteManifestDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)contentsFromAnnotation:(id)arg1;
- (id)extractItemsFromAnnotationWithError:(id *)arg1;
- (id)extractItemsFromAnnotationContentWithError:(id *)arg1;
- (void)resolveContentURLWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)finalizeItems:(id)arg1;
- (void)endLoadingItems:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginLoadingItems;
- (void)cancel;
- (void)loadItemsWithResolvedURLAndCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setUpItemResolver;
- (void)setUpContentURLResolveQueue;
- (CDUnknownBlockType)URLResolverForAnnotation:(id)arg1;
- (void)setUpSharedItemConfigurationWithAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithLinkAnnotation:(id)arg1;
- (id)init;

@end
