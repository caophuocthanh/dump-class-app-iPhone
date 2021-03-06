//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, NSURL, TOPUpgradeNotifications;

@interface TOPUpgradeAlertViewController : NSObject <UIAlertViewDelegate>
{
    NSString *lastUpgradeVersion_;
    NSURL *lastUpgradeURL_;
    int lastUpgradeType_;
    TOPUpgradeNotifications *upgradeNotifications_;
    BOOL isShowing_;
}

@property(retain, nonatomic) NSURL *lastUpgradeURL; // @synthesize lastUpgradeURL=lastUpgradeURL_;
@property(copy, nonatomic) NSString *lastUpgradeVersion; // @synthesize lastUpgradeVersion=lastUpgradeVersion_;
- (void)handleUnknownButton:(id)arg1 upgradeType:(int)arg2 buttonIndex:(int)arg3;
- (BOOL)isUpgradeButton:(id)arg1 upgradeType:(int)arg2 buttonIndex:(int)arg3;
- (void)showAlertForUpgradeType:(int)arg1 version:(id)arg2 upgradeURL:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)websiteButtonText;
- (id)upgradeButtonText;
- (id)alertTitle;
- (void)showAlertForRequiredUpgrade;
- (void)showAlertForSuggestedUpgrade;
- (void)dealloc;
- (id)initWithUpgradeNotifications:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

