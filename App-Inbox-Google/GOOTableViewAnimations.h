//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOTableViewDismissDelegate.h"

@class GOOTableView, NSArray, NSString, UIImageView, UIPanGestureRecognizer, UIView;

@interface GOOTableViewAnimations : NSObject <GOOTableViewDismissDelegate>
{
    UIView *_controllerView;
    UIImageView *_dismissSnapshotView;
    NSArray *_dismissIndexPaths;
    int _dismissSection;
    UIPanGestureRecognizer *_panGesture;
    BOOL _enableSwipeToDismissSection;
    id <GOOTableViewDismissDelegate> _delegate;
    GOOTableView *_tableView;
}

@property(nonatomic) BOOL enableSwipeToDismissSection; // @synthesize enableSwipeToDismissSection=_enableSwipeToDismissSection;
@property(nonatomic) __weak GOOTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <GOOTableViewDismissDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)dismissalAlphaForTranslationX:(float)arg1;
- (float)distanceThresholdForDismissal;
- (void)restorePanningCard;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)restorePanningCardIfNecessaryWithMomentumX:(float)arg1;
- (void)animateFinalCardDismissalToTranslationX:(float)arg1;
- (id)snapshotWithRect:(struct CGRect)arg1;
- (void)handlePan:(id)arg1;
- (id)indexPathForSectionAtPoint:(struct CGPoint)arg1;
- (BOOL)swipeToDismissAllowed;
- (void)tableView:(id)arg1 didCancelSwipeToDismissAtSection:(int)arg2;
- (void)tableView:(id)arg1 didEndSwipeToDismissAtSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginSwipeToDismissAtSection:(int)arg2;
- (BOOL)tableView:(id)arg1 canSwipeToDismissAtSection:(int)arg2;
- (id)initWithDelegate:(id)arg1 tableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

