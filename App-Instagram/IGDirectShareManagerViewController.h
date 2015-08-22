//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "IGShareManager.h"
#import "IGTextFieldDelegate.h"
#import "IGTokenFieldDelegate.h"
#import "IGUserListNetworkDataSourceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGDirectThread, IGMediaMetadata, IGTokenField, IGUserListLocalDataSource, IGUserListNetworkDataSource, NSArray, NSOrderedSet, NSString, UIScrollView, UIView, UIViewController<IGShareManagerDelegate>;

@interface IGDirectShareManagerViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, IGTextFieldDelegate, IGTokenFieldDelegate, IGUserListNetworkDataSourceDelegate, IGShareManager>
{
    BOOL _collapseGroups;
    BOOL _forceHide;
    BOOL _isPerformingSearch;
    BOOL _searchMode;
    NSString *_shareString;
    UIViewController<IGShareManagerDelegate> *_delegate;
    IGMediaMetadata *_mediaMetadata;
    UIView *_headerView;
    UIView *_tableHeaderView;
    NSOrderedSet *_groupThreads;
    NSOrderedSet *_singleUsers;
    IGDirectThread *_selectedGroup;
    IGUserListNetworkDataSource *_networkUsersDataSource;
    IGUserListLocalDataSource *_localUsersDataSource;
    IGTokenField *_tokenField;
    NSArray *_sections;
    NSArray *_headerViews;
}

@property(retain, nonatomic) NSArray *headerViews; // @synthesize headerViews=_headerViews;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) IGTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) IGUserListLocalDataSource *localUsersDataSource; // @synthesize localUsersDataSource=_localUsersDataSource;
@property(retain, nonatomic) IGUserListNetworkDataSource *networkUsersDataSource; // @synthesize networkUsersDataSource=_networkUsersDataSource;
@property(nonatomic) BOOL searchMode; // @synthesize searchMode=_searchMode;
@property(nonatomic) BOOL isPerformingSearch; // @synthesize isPerformingSearch=_isPerformingSearch;
@property(nonatomic) BOOL forceHide; // @synthesize forceHide=_forceHide;
@property(nonatomic) BOOL collapseGroups; // @synthesize collapseGroups=_collapseGroups;
@property(retain, nonatomic) IGDirectThread *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) NSOrderedSet *singleUsers; // @synthesize singleUsers=_singleUsers;
@property(retain, nonatomic) NSOrderedSet *groupThreads; // @synthesize groupThreads=_groupThreads;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) __weak UIViewController<IGShareManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
- (void).cxx_destruct;
- (void)reloadWithoutAnimation;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)endEditingSearchCell;
- (void)fetchData;
- (void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
- (void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
- (void)tokenFieldDidRequestSearch:(id)arg1;
- (BOOL)tokenFieldCanFinishEditing:(id)arg1;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenFieldWillFocusUser:(id)arg1;
- (id)tokenFieldViewForTokenOverlay:(id)arg1;
- (void)updateShareStatus;
- (void)handleSelectionForUser:(id)arg1 atIndexPath:(id)arg2;
- (void)handleSelectionForThread:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSections;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)seeAllTapped;
- (void)hideTapped;
- (id)headerForSectionWithTitle:(id)arg1 showSeeAll:(BOOL)arg2 showHide:(BOOL)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)groupMode;
- (BOOL)multiSelectMode;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) BOOL isReadyToShare;
- (void)viewDidLoad;
- (id)initWithMediaMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

