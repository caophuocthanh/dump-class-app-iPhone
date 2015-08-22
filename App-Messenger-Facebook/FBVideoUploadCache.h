//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBObjectCachingListener.h"

@class FBFileSystemObjectCache, NSMutableArray, NSMutableDictionary, NSString;

@interface FBVideoUploadCache : NSObject <FBObjectCachingListener>
{
    FBFileSystemObjectCache *_objectCache;
    NSMutableDictionary *_allCachedStates;
    BOOL _hasSynced;
    BOOL _isLoading;
    NSMutableArray *_completionBlocks;
}

- (void).cxx_destruct;
- (void)successfullyStoredObject:(id)arg1;
- (void)failedToWriteObject:(id)arg1;
- (void)successfullyLoadedObject:(id)arg1;
- (void)failedToLoadStoredObject;
- (void)attemptedToLoadNonExistentStoredObject;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_didFinishLoading;
- (id)getVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2;
- (void)loadAllVideoUploadStatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_removeVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2;
- (void)removeVideoUploadState:(id)arg1;
- (void)saveVideoUploadState:(id)arg1;
- (id)initWithObjectCacheFactory:(id)arg1 preferences:(id)arg2 cacheCategory:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
