//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewController.h"

#import "IGGroupedTableViewDataSource.h"

@class IGGroupedTableView, IGUser, NSString;

@interface IGGroupedTableViewController : IGPlainTableViewController <IGGroupedTableViewDataSource>
{
    float _tableViewBottomPadding;
}

@property(nonatomic) float tableViewBottomPadding; // @synthesize tableViewBottomPadding=_tableViewBottomPadding;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)titleForFooterInSection:(int)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (id)subtitleForHeaderInSection:(int)arg1;
- (id)init;
- (void)didSelectUnlinkCellForServiceType:(int)arg1;
- (void)configureUnlinkCell:(id)arg1;
- (id)titleForUnlinkSection;
- (void)validateFacebookToken;
- (void)onFacebookAuthCancelled;
- (void)onFacebookAuthSuccess;
- (void)loginViaFacebook;
- (void)getFacebookTokenForForPasswordResetForUserEmail:(id)arg1;
- (void)getFacebookTokenForForPasswordResetForUser:(id)arg1;
- (void)configureFacebookCell:(id)arg1;
- (void)stopObservingFacebookAuthNotifications;
- (void)startObservingFacebookAuthNotifications;
@property(nonatomic) BOOL animateResetVC;
@property(nonatomic) BOOL fetchingResetToken;
@property(nonatomic) NSString *passwordResetUserEmail;
@property(nonatomic) IGUser *passwordResetUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IGGroupedTableView *tableView; // @dynamic tableView;

@end

