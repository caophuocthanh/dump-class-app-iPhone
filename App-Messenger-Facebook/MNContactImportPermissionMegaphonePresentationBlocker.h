//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMegaphonePresentationCoordinator.h"

@class MNUserSettings, NSString;

@interface MNContactImportPermissionMegaphonePresentationBlocker : NSObject <MNMegaphonePresentationCoordinator, FBClassProvidable>
{
    MNUserSettings *_userSettings;
    id <MNMegaphonePresentationCoordinator> _megaphonePresentationCoordinator;
    id <FBClock> _clock;
}

@property(retain, nonatomic) id <FBClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) id <MNMegaphonePresentationCoordinator> megaphonePresentationCoordinator; // @synthesize megaphonePresentationCoordinator=_megaphonePresentationCoordinator;
@property(retain, nonatomic) MNUserSettings *userSettings; // @synthesize userSettings=_userSettings;
- (void).cxx_destruct;
- (BOOL)megaphonePresenterAvailableForUse:(id)arg1 withNavigationController:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSettings:(id)arg1 megaphonePresentationCoordinator:(id)arg2 clock:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

