//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBContactsSyncOperationFactory.h"

@class NSString;

@interface FBGraphQLSyncOperationFactory : NSObject <FBContactsSyncOperationFactory, FBClassProvidable>
{
    id <FBFacebookRequestSender> _facebookRequestSender;
}

- (void)cleanupFullSyncOperation:(id)arg1;
- (void)cleanupDeltaSyncOperation:(id)arg1;
- (id)forceSyncOperationForUserWithId:(id)arg1 delegate:(id)arg2;
- (id)fullSyncOperationWithPreviousContext:(id)arg1 delegate:(id)arg2;
- (id)deltaSyncOperationWithPreviousContext:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithFacebookRequestSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
