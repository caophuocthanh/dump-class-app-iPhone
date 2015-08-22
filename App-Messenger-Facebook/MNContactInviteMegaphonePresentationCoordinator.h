//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMegaphonePresentationCoordinator.h"

@class FBMobileConfigFactory, FBUserSession, NSString;

@interface MNContactInviteMegaphonePresentationCoordinator : NSObject <MNMegaphonePresentationCoordinator, FBClassProvidable>
{
    id <MNMegaphonePresentationCoordinator> _megaphonePresentationCoordinator;
    FBUserSession *_session;
    FBMobileConfigFactory *_mobileConfig;
}

@property(retain, nonatomic) FBMobileConfigFactory *mobileConfig; // @synthesize mobileConfig=_mobileConfig;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <MNMegaphonePresentationCoordinator> megaphonePresentationCoordinator; // @synthesize megaphonePresentationCoordinator=_megaphonePresentationCoordinator;
- (void).cxx_destruct;
- (BOOL)megaphonePresenterAvailableForUse:(id)arg1 withNavigationController:(id)arg2;
- (id)initWithMegaphonePresentationCoordinator:(id)arg1 session:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
