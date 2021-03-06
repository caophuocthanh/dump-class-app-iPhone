//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNMessagesCollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class MNCollectionViewPlaygroundView, NSMutableArray, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface MNCollectionViewPlaygroundViewController : UIViewController <UICollectionViewDataSource, MNMessagesCollectionViewDelegate>
{
    MNCollectionViewPlaygroundView *_playgroundView;
    NSMutableArray *_messageModels;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    BOOL _randomUpdating;
}

- (void).cxx_destruct;
- (id)messagesCollectionView:(id)arg1 layout:(id)arg2 disappearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(id)arg4 atIndexPath:(id)arg5;
- (id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(id)arg4 atIndexPath:(id)arg5;
- (id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearanceTransitioningForElementWithCategory:(unsigned int)arg3 kind:(id)arg4 atIndexPath:(id)arg5;
- (id)messagesCollectionView:(id)arg1 layout:(id)arg2 layoutElementsForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)_insertIndexAtPoint:(struct CGPoint)arg1;
- (void)_insertAtPoint:(struct CGPoint)arg1 fromMe:(BOOL)arg2;
- (void)_deleteAtPoint:(struct CGPoint)arg1 fromMe:(BOOL)arg2;
- (void)_swipeRight:(id)arg1;
- (void)_swipeLeft:(id)arg1;
- (void)_doubleTap;
- (void)_scrollToBottomAnimated;
- (id)_updateSeenReceiptViewModels;
- (id)_updateSentReceiptViewModels;
- (id)_updateProfileViewModels;
- (void)_performUpdateWithUpdateItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_multipleUpdate;
- (id)_insertMessageAt:(int)arg1 fromMe:(BOOL)arg2;
- (id)_insertMessageAt:(int)arg1;
- (id)_deleteMessageAt:(int)arg1;
- (id)_sendMessage;
- (id)_receiveMessage;
- (void)_performRandomUpdates;
- (void)_stopRandomUpdates;
- (void)_startRandomUpdates;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

