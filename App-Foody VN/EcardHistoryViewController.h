//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePagingListTableViewController.h"

@interface EcardHistoryViewController : BasePagingListTableViewController
{
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setTableViewEmptyMessage;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)didReceivedUserLogoutEvent:(id)arg1;
- (void)didReceivedUserProfileChangedEvent:(id)arg1;
- (void)didReceivedUserLoginEvent:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

