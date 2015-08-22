//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFStatefulTableViewController.h"

#import "PSPDFOutlineCellDelegate.h"
#import "PSPDFStyleable.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UISearchResultsUpdating.h"

@class NSArray, NSOperation, NSOperationQueue, NSString, PSPDFDocument, PSPDFOutlineElement, UIPopoverController, UISearchBar, UISearchController;

@interface PSPDFOutlineViewController : PSPDFStatefulTableViewController <PSPDFOutlineCellDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchDisplayDelegate, PSPDFStyleable>
{
    UISearchController *_searchController;
    UISearchBar *_searchBar;
    BOOL _isInPopover;
    BOOL _prefersStatusBarHidden;
    BOOL _allowCopy;
    BOOL _searchEnabled;
    BOOL _showPageLabels;
    id <PSPDFOutlineViewControllerDelegate> _delegate;
    unsigned int _maximumNumberOfLines;
    float _outlineIntentLeftOffset;
    float _outlineIndentMultiplier;
    PSPDFDocument *_document;
    PSPDFOutlineElement *_outline;
    NSArray *_filteredOutline;
    NSArray *_visibleItems;
    NSOperation *_outlineParseOperation;
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSOperation *outlineParseOperation; // @synthesize outlineParseOperation=_outlineParseOperation;
@property(copy, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(copy, nonatomic) NSArray *filteredOutline; // @synthesize filteredOutline=_filteredOutline;
@property(retain, nonatomic) PSPDFOutlineElement *outline; // @synthesize outline=_outline;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) float outlineIndentMultiplier; // @synthesize outlineIndentMultiplier=_outlineIndentMultiplier;
@property(nonatomic) float outlineIntentLeftOffset; // @synthesize outlineIntentLeftOffset=_outlineIntentLeftOffset;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) BOOL showPageLabels; // @synthesize showPageLabels=_showPageLabels;
@property(nonatomic) BOOL searchEnabled; // @synthesize searchEnabled=_searchEnabled;
@property(nonatomic) BOOL allowCopy; // @synthesize allowCopy=_allowCopy;
@property(nonatomic) __weak id <PSPDFOutlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(nonatomic) BOOL isInPopover; // @synthesize isInPopover=_isInPopover;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (int)positionForBar:(id)arg1;
- (void)filterContentForSearchText:(id)arg1 scope:(id)arg2;
- (void)setAllViewsExceptSearchHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)adjustForSearchDisplayControllerBeginSearch:(BOOL)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)adjustSearchBarForSearchControllerSearchActive:(BOOL)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearchBarVisibility;
- (void)configureSearchBar:(id)arg1;
- (id)searchDisplayController;
- (id)searchController;
- (id)searchBar;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)outlineElementForTableView:(id)arg1 indexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)outlineCellDidTapDisclosureButton:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setTopVisibleCellItem;
- (struct CGSize)requiredPopoverSize;
- (void)updateVisibleItems;
- (void)refetchOutline;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithDocument:(id)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(nonatomic) int barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isBarTranslucent;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(readonly) Class superclass;

@end
