//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface MNMessagesSyncAppAttributionVisibility : NSObject <TBase, NSCoding>
{
    BOOL __hideAttribution;
    BOOL __hideInstallButton;
    BOOL __hideReplyButton;
    BOOL __disableBroadcasting;
    BOOL __hideAppIcon;
    BOOL __hideAttribution_isset;
    BOOL __hideInstallButton_isset;
    BOOL __hideReplyButton_isset;
    BOOL __disableBroadcasting_isset;
    BOOL __hideAppIcon_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetHideAppIcon;
- (BOOL)hideAppIconIsSet;
@property(nonatomic, getter=hideAppIcon, setter=setHideAppIcon:) BOOL hideAppIcon;
- (void)unsetDisableBroadcasting;
- (BOOL)disableBroadcastingIsSet;
@property(nonatomic, getter=disableBroadcasting, setter=setDisableBroadcasting:) BOOL disableBroadcasting;
- (void)unsetHideReplyButton;
- (BOOL)hideReplyButtonIsSet;
@property(nonatomic, getter=hideReplyButton, setter=setHideReplyButton:) BOOL hideReplyButton;
- (void)unsetHideInstallButton;
- (BOOL)hideInstallButtonIsSet;
@property(nonatomic, getter=hideInstallButton, setter=setHideInstallButton:) BOOL hideInstallButton;
- (void)unsetHideAttribution;
- (BOOL)hideAttributionIsSet;
@property(nonatomic, getter=hideAttribution, setter=setHideAttribution:) BOOL hideAttribution;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHideAttribution:(BOOL)arg1 hideInstallButton:(BOOL)arg2 hideReplyButton:(BOOL)arg3 disableBroadcasting:(BOOL)arg4 hideAppIcon:(BOOL)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
