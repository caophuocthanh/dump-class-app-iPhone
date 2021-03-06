//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface GOOLockingDialogContainerView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    BOOL _manuallySettingContentOffset;
    struct CGPoint _previousContentOffset;
    struct CGRect _referenceBounds;
    struct CGSize _scrollViewReferenceSize;
    BOOL _usePreferredHeight;
    id <GOOLockingDialogContainerViewDelegate> _delegate;
    int _position;
    struct CGSize _preferredContentSize;
}

@property(nonatomic) BOOL usePreferredHeight; // @synthesize usePreferredHeight=_usePreferredHeight;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) __weak id <GOOLockingDialogContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)minimumHeightForScrollView;
- (float)middleHeightForScrollView;
- (float)maximumHeightForScrollView;
- (float)yOffsetForScrollView;
- (struct CGRect)frameForPositionWithMaximumHeight:(float)arg1;
- (struct CGRect)frameForTop;
- (struct CGRect)frameForDefault;
- (struct CGRect)frameForHidden;
- (struct CGRect)frameForPositon:(int)arg1;
- (void)scrollWithOffset:(float)arg1 animated:(BOOL)arg2 velocity:(float)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (float)targetScrollingOffsetShouldUpdatePositon:(BOOL)arg1;
- (void)scrollViewContentOffsetDidChange;
- (void)handleDragEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)orientedApplicationFrame;
- (void)updateReferenceBoundsFromSuperview:(id)arg1;
- (void)setPositon:(int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDescendantScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

