//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMSPDeltaHandling.h"
#import "FBSessionClassProvidable.h"

@class FBMThreadMarkService, FBMThreadSet, InAppNotificationBadgeCounter, MNThreadUpdateService, NSString;

@interface FBMSPMarkUnreadDeltaHandler : NSObject <FBSessionClassProvidable, FBMSPDeltaHandling>
{
    FBMThreadSet *_threadSet;
    InAppNotificationBadgeCounter *_badgeCounter;
    FBMThreadMarkService *_threadMarkService;
    MNThreadUpdateService *_threadUpdateService;
    id <MNAuthenticationManager> _authenticationManager;
}

- (void).cxx_destruct;
- (void)_markUnreadThreadsFromThreadsProviderBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processFoldersFromDeltaData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processThreadKeysFromDeltaData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)affectedThreadKeysForDelta:(id)arg1;
- (void)handleDelta:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)threadKeysForPrepareFromDelta:(id)arg1;
- (id)incrementalPersistenceJobDescriptionsForDelta:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSet:(id)arg1 badgeCounter:(id)arg2 threadMarkService:(id)arg3 threadUpdateService:(id)arg4 authenticationManager:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
