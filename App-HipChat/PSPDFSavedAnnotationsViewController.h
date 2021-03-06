//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotationGridViewController.h"

#import "PSPDFAnnotationGridViewControllerDataSource.h"
#import "PSPDFStyleable.h"

@class NSString, UIBarButtonItem, UIPopoverController, UIView;

@interface PSPDFSavedAnnotationsViewController : PSPDFAnnotationGridViewController <PSPDFAnnotationGridViewControllerDataSource, PSPDFStyleable>
{
    BOOL _isInPopover;
    id <PSPDFAnnotationSetStore> _annotationStore;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_pasteButton;
    UIView *_emptyView;
}

+ (id)sharedAnntationStore;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIBarButtonItem *pasteButton; // @synthesize pasteButton=_pasteButton;
@property(retain, nonatomic) UIBarButtonItem *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) id <PSPDFAnnotationSetStore> annotationStore; // @synthesize annotationStore=_annotationStore;
@property(nonatomic) BOOL isInPopover; // @synthesize isInPopover=_isInPopover;
- (void).cxx_destruct;
- (id)annotationGridViewController:(id)arg1 annotationSetForIndexPath:(id)arg2;
- (int)annotationGridViewController:(id)arg1 numberOfAnnotationsInSection:(int)arg2;
- (int)numberOfSectionsInAnnotationGridViewController:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)reloadData;
- (void)pasteboardChangedNotification:(id)arg1;
- (void)updatePasteButtonState;
- (void)pasteButton:(id)arg1;
- (void)deleteButton:(id)arg1;
- (void)updateToolbarState;
- (void)updateToolbarAnimated:(BOOL)arg1;
- (void)updateEmptyStateAnimated:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) int barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isBarTranslucent;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(nonatomic) BOOL prefersStatusBarHidden;
@property(readonly) Class superclass;

@end

