//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFConcurrentOperation.h"

#import "AFBundleSerializerDelegate.h"

@class AFCdsFormatProvider, NSManagedObjectContext, NSMapTable, NSOperationQueue, NSString, NSURLSession;

@interface AFCdsUpdateOperation : AFConcurrentOperation <AFBundleSerializerDelegate>
{
    CDUnknownBlockType _permissionsUpdateBlock;
    CDUnknownBlockType _updateSuccessProvider;
    NSManagedObjectContext *_updateContext;
    id _saveObserver;
    AFCdsFormatProvider *_formatProvider;
    NSString *_currentManifestVersion;
    NSOperationQueue *_workerQueue;
    NSURLSession *_urlSession;
    NSMapTable *_contentFetchOperationMap;
}

+ (BOOL)supportsMessageType:(id)arg1;
+ (BOOL)supportsContentType:(id)arg1;
@property(retain, nonatomic) NSMapTable *contentFetchOperationMap; // @synthesize contentFetchOperationMap=_contentFetchOperationMap;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSOperationQueue *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(readonly, copy, nonatomic) NSString *currentManifestVersion; // @synthesize currentManifestVersion=_currentManifestVersion;
@property(readonly, nonatomic) AFCdsFormatProvider *formatProvider; // @synthesize formatProvider=_formatProvider;
@property(readonly, nonatomic) id saveObserver; // @synthesize saveObserver=_saveObserver;
@property(readonly, nonatomic) NSManagedObjectContext *updateContext; // @synthesize updateContext=_updateContext;
@property(copy) CDUnknownBlockType updateSuccessProvider; // @synthesize updateSuccessProvider=_updateSuccessProvider;
@property(copy) CDUnknownBlockType permissionsUpdateBlock; // @synthesize permissionsUpdateBlock=_permissionsUpdateBlock;
- (void).cxx_destruct;
- (void)cancel;
- (id)bundleFetchOperationWithDictionary:(id)arg1 index:(int)arg2 existingBundle:(id)arg3;
- (id)messageFetchOperationWithDictionary:(id)arg1 index:(int)arg2 existingMessage:(id)arg3;
- (id)contentPackFetchOperationWithDictionary:(id)arg1 index:(int)arg2 existingPack:(id)arg3 isDependency:(BOOL)arg4;
- (id)fetchOperationWithDictionary:(id)arg1 serializer:(id)arg2;
- (CDUnknownBlockType)failedUpdateProviderWithError:(id)arg1;
- (void)callPermissionsBlockWithPermissionsArray:(id)arg1;
- (void)bundleSerializer:(id)arg1 validateDependencies:(id)arg2 forBundleWithIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)processBundlesWithDictionary:(id)arg1;
- (id)processPacksWithType:(id)arg1 dictionary:(id)arg2;
- (id)processPacksWithDictionary:(id)arg1;
- (id)processMessagesWithType:(id)arg1 dictionary:(id)arg2;
- (id)processMessagesWithDictionary:(id)arg1;
- (void)processManifestData:(id)arg1;
- (void)enqueueManifestFetch;
- (void)start;
- (id)initWithFormatProvider:(id)arg1 currentManifestVersion:(id)arg2 managedObjectContext:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

