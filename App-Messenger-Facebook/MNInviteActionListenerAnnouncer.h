//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNInviteActionListener.h"

@class NSString;

@interface MNInviteActionListenerAnnouncer : FBAnnouncerBase <MNInviteActionListener>
{
}

- (void)threadDetailsInviteButtonPressedWithUsers:(id)arg1 fromSource:(unsigned int)arg2;
- (void)inviteActionSheetOptionPressedForUserId:(id)arg1;
- (void)settingsTabInvitePressed;
- (void)inviteBannerTappedForUserId:(id)arg1;
- (void)inviteButtonPressedForUserId:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
