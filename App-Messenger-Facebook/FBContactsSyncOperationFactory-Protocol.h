//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBContactsFetchContext, NSOperation, NSString;

@protocol FBContactsSyncOperationFactory <NSObject>
- (NSOperation *)forceSyncOperationForUserWithId:(NSString *)arg1 delegate:(id <FBSingleUserSyncOperationDelegate>)arg2;
- (NSOperation *)fullSyncOperationWithPreviousContext:(FBContactsFetchContext *)arg1 delegate:(id <FBFullSyncOperationDelegate>)arg2;
- (NSOperation *)deltaSyncOperationWithPreviousContext:(FBContactsFetchContext *)arg1 delegate:(id <FBDeltaSyncOperationDelegate>)arg2;
- (void)cleanupFullSyncOperation:(NSOperation *)arg1;
- (void)cleanupDeltaSyncOperation:(NSOperation *)arg1;
@end
