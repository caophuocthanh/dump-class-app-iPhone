//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PagingRequestInfo, UITableView;

@interface UserRestaurantListViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    unsigned int listType;
    NSString *userId;
    NSString *userName;
    NSArray *restaurantList;
    UITableView *resListTableView;
    PagingRequestInfo *pagingRequest;
}

@property(retain, nonatomic) PagingRequestInfo *pagingRequest; // @synthesize pagingRequest;
@property(nonatomic) __weak UITableView *resListTableView; // @synthesize resListTableView;
@property(retain, nonatomic) NSArray *restaurantList; // @synthesize restaurantList;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(nonatomic) unsigned int listType; // @synthesize listType;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)refreshRestaurantList;
- (void)loadMoreDataForScreen;
- (void)loadMoreResultForScreen;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

