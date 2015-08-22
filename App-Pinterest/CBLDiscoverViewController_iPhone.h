//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLSearchEnabledViewController.h"

#import "CBLDiscoveryChildControllerProtocol.h"
#import "CBLTableViewSectionDisplayNotifierDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLCategory, CBLTableViewSectionDisplayNotifier, NSArray, NSString, UITableView;

@interface CBLDiscoverViewController_iPhone : CBLSearchEnabledViewController <UITableViewDataSource, UITableViewDelegate, CBLTableViewSectionDisplayNotifierDelegate, CBLDiscoveryChildControllerProtocol>
{
    UITableView *_tableView;
    NSArray *_recentCategories;
    int _currentSection;
    CBLCategory *_selectedCategory;
    CBLTableViewSectionDisplayNotifier *_sectionNotifier;
}

@property(retain, nonatomic) CBLTableViewSectionDisplayNotifier *sectionNotifier; // @synthesize sectionNotifier=_sectionNotifier;
@property(retain, nonatomic) CBLCategory *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(nonatomic) int currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) NSArray *recentCategories; // @synthesize recentCategories=_recentCategories;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)userGuideAnchorPoints;
- (int)experiencePlacement;
- (BOOL)experienceEnabled;
- (void)tableViewSectionNotifier:(id)arg1 willDisplaySectionAtIndex:(int)arg2;
- (void)tableViewSectionNotifier:(id)arg1 didEndDisplaySectionAtIndex:(int)arg2;
- (void)discoveryChildControllerScrollToTop;
- (void)handleScrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)categoryCollectionDidClear:(id)arg1;
- (void)categoryCollectionDidUpdateContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)barTintColor;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
