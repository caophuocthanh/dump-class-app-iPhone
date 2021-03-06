//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewController.h"

#import "IGAutocompleteAsyncDataSourceDelegate.h"

@class IGExploreSearchViewController, IGRaindropNavState, NSMutableArray, NSOrderedSet, NSString;

@interface IGSearchResultsViewController : IGPlainTableViewController <IGAutocompleteAsyncDataSourceDelegate>
{
    BOOL _isSearching;
    BOOL _isBackSpace;
    BOOL _hasInteraction;
    id <IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> _dataSource;
    id <IGSearchResultsViewControllerDelegate> _delegate;
    NSString *_searchText;
    NSString *_noResultsMessage;
    IGExploreSearchViewController *_hostingViewController;
    unsigned int _minUnSeenRow;
    IGRaindropNavState *_navState;
    NSOrderedSet *_sectionControllers;
    NSMutableArray *_searchQueryArray;
}

@property(nonatomic) BOOL hasInteraction; // @synthesize hasInteraction=_hasInteraction;
@property(nonatomic) BOOL isBackSpace; // @synthesize isBackSpace=_isBackSpace;
@property(retain, nonatomic) NSMutableArray *searchQueryArray; // @synthesize searchQueryArray=_searchQueryArray;
@property(readonly, nonatomic) NSOrderedSet *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(retain, nonatomic) IGRaindropNavState *navState; // @synthesize navState=_navState;
@property(nonatomic) unsigned int minUnSeenRow; // @synthesize minUnSeenRow=_minUnSeenRow;
@property(nonatomic) __weak IGExploreSearchViewController *hostingViewController; // @synthesize hostingViewController=_hostingViewController;
@property(readonly, nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSString *noResultsMessage; // @synthesize noResultsMessage=_noResultsMessage;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <IGSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)saveSearchQueryText:(id)arg1;
- (void)logSearchBackSpaceRaindropEvent;
- (void)logSearchTypingRaindropEvent;
- (void)logSearchResponseToSearchText:(id)arg1 rankToken:(id)arg2;
- (void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3;
- (void)logUserSearchQuery;
- (void)logSearchBeginEvent;
- (void)logSearchInitiated;
- (void)resetSearchRankTokenInfo;
- (void)prepareLoggingForQueryText:(id)arg1;
- (void)onClearSearchNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)noResultsCellForTableView:(id)arg1;
- (id)searchingCellForTableView:(id)arg1;
- (BOOL)isSearchingIndicatorSection:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)searchResultState;
- (BOOL)noSearchQuery;
- (void)autocompleteDataSourceDidFailLoad:(id)arg1;
- (void)autocompleteDataSourceDidFinishLoading:(id)arg1;
- (void)autocompleteDataSourceDidStartLoading:(id)arg1;
- (void)logRaindropSearchQueryEvent;
- (void)logSearchCancelEventForSearchString:(id)arg1;
- (void)logSearchCancelRaindropEvent;
- (void)logSearchCancelEvent;
- (void)didSelectResultRowAtIndexPath:(id)arg1;
- (void)filterBySearchString:(id)arg1;
- (int)searchType;
- (id)tableView:(id)arg1 resultCellForIndexPath:(id)arg2;
- (id)sectionControllerForSection:(unsigned int)arg1;
- (void)onSearchTextDidChange:(id)arg1;
- (void)reloadTableView;
- (void)searchDidEnd;
- (void)searchDidStart;
- (void)transitionToVisibleState;
- (void)reloadSearchView;
- (void)setSections:(id)arg1;
- (void)configure;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct UIEdgeInsets)preferredContentInsets;
- (BOOL)prefersNavigationBarHidden;
- (id)analyticsMetadata;
- (id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

