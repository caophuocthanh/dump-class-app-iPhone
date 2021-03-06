//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailViewController.h"

#import "CellContentWidthDelegate.h"
#import "EditPredicatesViewDelegate.h"
#import "RecipientAutocompleteViewControllerDelegate.h"

@class EditPredicatesView, GBTDropShadow, NSString, RecipientAutocompleteViewController, UIBarButtonItem;

@interface EditFilterViewController : MailViewController <CellContentWidthDelegate, EditPredicatesViewDelegate, RecipientAutocompleteViewControllerDelegate>
{
    RecipientAutocompleteViewController *autocompleteController_;
    GBTDropShadow *dropShadow_;
    EditPredicatesView *editPredicatesView_;
    id <JBTClusterFilter_Builder> filter_;
    id <JBTFilterResultsList> filterResults_;
    UIBarButtonItem *saveButton_;
    id <EditFilterViewControllerDelegate> _editFilterDelegate;
}

@property(nonatomic) __weak id <EditFilterViewControllerDelegate> editFilterDelegate; // @synthesize editFilterDelegate=_editFilterDelegate;
- (void).cxx_destruct;
- (void)resizePredicatesTable;
- (BOOL)predicateSupportsContacts:(id)arg1;
- (void)hideAutocomplete;
- (BOOL)canShowZeroStates;
- (float)backgroundHorizontalInsetForView:(id)arg1;
- (float)contentWidthForView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)recipientAutocompleteViewControllerDidUpdate:(id)arg1;
- (void)recipientAutocompleteViewController:(id)arg1 didSelectToken:(id)arg2;
- (void)editPredicatesViewDidEndEditing:(id)arg1;
- (void)editPredicatesView:(id)arg1 didUpdatePredicate:(id)arg2;
- (void)editPredicatesView:(id)arg1 didUpdateFilter:(id)arg2;
- (void)editPredicatesViewDidRemovePredicate:(id)arg1;
- (void)editPredicatesViewDidAddPredicate:(id)arg1;
- (unsigned int)cellPositionForIndexPath:(id)arg1;
- (id)createDataSource;
- (void)saveButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (int)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithFilter:(id)arg1 navigationType:(unsigned int)arg2 clustersApi:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

