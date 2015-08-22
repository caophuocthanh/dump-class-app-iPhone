//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLUserCellDelegate.h"
#import "CBLViewControllerPresenter.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLConversation, NSString, UITableView;

@interface CBLConversationSettingsViewController : CBLBaseViewController <CBLUserCellDelegate, UITableViewDataSource, UITableViewDelegate, CBLViewControllerPresenter>
{
    CBLConversation *_conversation;
    UITableView *_tableView;
    int _selectedReportReason;
}

+ (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3 usingPresenterDelegate:(id)arg4 deferingToControllerDelegate:(id)arg5;
@property(nonatomic) int selectedReportReason; // @synthesize selectedReportReason=_selectedReportReason;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CBLConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 textForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellTextForCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 textForHeaderInSection:(int)arg2;
- (void)hideConversation:(id)arg1;
- (void)reportButtonPressed:(id)arg1;
- (void)dismissWithReloadingInbox:(BOOL)arg1;
- (void)updateTitleView;
- (void)blockUser:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
