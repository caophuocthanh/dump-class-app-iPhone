//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSearchResultsViewController.h"

#import "IGExploreSearchChildViewController.h"

@class IGPlacesAutocompleteDataSource, IGSearchResultsEnableLocationCell, NSString;

@interface IGPlacesSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController>
{
    IGSearchResultsEnableLocationCell *_enableLocationCell;
}

@property(readonly, nonatomic) IGSearchResultsEnableLocationCell *enableLocationCell; // @synthesize enableLocationCell=_enableLocationCell;
- (void).cxx_destruct;
- (void)logRaindropSearchQueryEvent;
- (void)logSearchCancelRaindropEvent;
- (void)logSearchCancelEventForSearchString:(id)arg1;
- (void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3;
- (id)analyticsExtras;
- (int)searchType;
- (BOOL)enableNavState;
- (int)viewType;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)prepareLoggingForQueryText:(id)arg1;
- (void)filterBySearchString:(id)arg1;
- (void)reloadTableView;
- (BOOL)shouldShowLocationCellInSection:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)nearbyTitle;
- (id)searchBarPlaceholder;
- (id)fallbackIcon;
- (void)dealloc;
- (id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) IGPlacesAutocompleteDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

