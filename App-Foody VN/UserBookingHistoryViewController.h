//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserBookingHistoryTableViewCellDelegate.h"

@class BookingHistoryLoader, NSMutableArray, NSString, UITableView, UserBookingHistoryHeaderView;

@interface UserBookingHistoryViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UserBookingHistoryTableViewCellDelegate>
{
    UITableView *_contentTableView;
    NSMutableArray *_bookingList;
    unsigned int _loadingSesssion;
    BookingHistoryLoader *_dataLoader;
    UserBookingHistoryHeaderView *_headerView;
}

@property(retain, nonatomic) UserBookingHistoryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) BookingHistoryLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) unsigned int loadingSesssion; // @synthesize loadingSesssion=_loadingSesssion;
@property(retain, nonatomic) NSMutableArray *bookingList; // @synthesize bookingList=_bookingList;
@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void).cxx_destruct;
- (void)backToPreviousView;
- (void)didReceivedUserLogoutEvent:(id)arg1;
- (void)loadMoreDataForScreen;
- (void)touchOnReservation:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)refreshContentForTableView;
- (void)loadMoreContentForTableView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

