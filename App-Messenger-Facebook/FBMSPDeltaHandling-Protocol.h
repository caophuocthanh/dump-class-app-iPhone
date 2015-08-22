//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol FBMSPDeltaHandling <NSObject>
- (NSArray *)incrementalPersistenceJobDescriptionsForDelta:(id)arg1;
- (NSArray *)affectedThreadKeysForDelta:(id)arg1;
- (NSArray *)threadKeysForPrepareFromDelta:(id)arg1;
- (void)handleDelta:(id)arg1 completion:(void (^)(void))arg2;

@optional
- (NSArray *)threadKeysToMoveToNonInboxFolderForDelta:(id)arg1;
- (NSArray *)threadKeysToMoveToInboxFolderForDelta:(id)arg1;
- (NSArray *)threadKeysToDeleteForDelta:(id)arg1;
- (BOOL)shouldForceFetchInbox:(id)arg1;
- (BOOL)shouldForceFetchThreadKeys:(id)arg1;
- (void)willPrepareThreadForDelta:(id)arg1;
@end
