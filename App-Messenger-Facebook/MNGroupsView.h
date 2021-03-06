//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBToastContainerViewDelegate.h"

@class FBLazyCreator, FBListViewScrollManager, FBToastContainerView, MNLoadingView, NSString, UICollectionView;

@interface MNGroupsView : UIView <FBToastContainerViewDelegate>
{
    FBListViewScrollManager *_scrollManager;
    FBLazyCreator *_loadingViewCreator;
    MNLoadingView *_loadingView;
    unsigned int _viewState;
    UICollectionView *_groupsCollectionView;
    FBToastContainerView *_toastContainerView;
}

@property(readonly, nonatomic) FBToastContainerView *toastContainerView; // @synthesize toastContainerView=_toastContainerView;
@property(readonly, nonatomic) UICollectionView *groupsCollectionView; // @synthesize groupsCollectionView=_groupsCollectionView;
@property(nonatomic) unsigned int viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)_updateTableViewContentInsets;
- (void)_toastContainerViewWillChangeWithDuration:(double)arg1;
- (void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)setViewState:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)_viewForViewState:(unsigned int)arg1;
- (struct CGRect)_toastViewFrame;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (struct CGRect)_topToastViewFrame;
- (void)_layoutToastContainerView;
- (void)layoutSubviews;
- (void)_updateCollectionViewContentInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

