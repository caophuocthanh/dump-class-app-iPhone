//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSearchResultsViewController.h"

#import "IGExploreSearchChildViewController.h"

@class IGUserListAutocompleteDataSource, NSString;

@interface IGUserSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController>
{
}

- (id)userIdsArray;
- (void)logRaindropSearchQueryEvent;
- (void)logSearchCancelRaindropEvent;
- (void)logSearchCancelEventForSearchString:(id)arg1;
- (void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3;
- (id)analyticsExtras;
- (int)searchType;
- (BOOL)enableNavState;
- (int)viewType;
- (void)reloadTableView;
- (void)filterBySearchString:(id)arg1;
- (void)viewDidLoad;
- (id)searchBarPlaceholder;
- (id)fallbackIcon;
- (id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) IGUserListAutocompleteDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

