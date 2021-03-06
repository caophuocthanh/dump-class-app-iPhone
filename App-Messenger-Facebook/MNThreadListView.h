//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBToastContainerViewDelegate.h"
#import "MNMainTabNullStateViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBLazyCreator, FBListViewScrollManager, FBToastContainerView, MNMainTabNullStateView, MNNullStateViewModel, MNPullToRefreshView, MNThreadListFooterView, NSMutableArray, NSString, NSTimer, UITableView;

@interface MNThreadListView : UIView <UIGestureRecognizerDelegate, FBToastContainerViewDelegate, MNMainTabNullStateViewDelegate>
{
    NSTimer *_timestampsUpdateTimer;
    unsigned int _viewState;
    NSMutableArray *_scrollStateStack;
    FBListViewScrollManager *_scrollManager;
    FBLazyCreator *_loadingViewCreator;
    MNPullToRefreshView *_pullToRefreshView;
    UIView *_tableViewWhiteBackground;
    MNMainTabNullStateView *_emptyInboxNux;
    UIView *_tableViewWrapperView;
    BOOL _shouldPullToRefresh;
    float _tableViewMinimumInset;
    MNNullStateViewModel *_nullStateViewModel;
    BOOL _showsLoadingHeader;
    BOOL _showsEmptyInboxNUX;
    id <MNThreadListViewDelegate> _delegate;
    UITableView *_tableView;
    MNThreadListFooterView *_footerView;
    FBToastContainerView *_topToastContainerView;
}

@property(readonly, nonatomic) FBToastContainerView *topToastContainerView; // @synthesize topToastContainerView=_topToastContainerView;
@property(nonatomic) BOOL showsEmptyInboxNUX; // @synthesize showsEmptyInboxNUX=_showsEmptyInboxNUX;
@property(nonatomic) BOOL showsLoadingHeader; // @synthesize showsLoadingHeader=_showsLoadingHeader;
@property(readonly, nonatomic) MNThreadListFooterView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MNThreadListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_toastContainerViewWillChangeWithDuration:(double)arg1;
- (void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)mn_setBottomContentInset:(float)arg1;
- (void)mn_setTopContentInset:(float)arg1;
- (void)mainTabNullStateDidTapCallToAction:(id)arg1;
- (void)_createEmptyInboxNuxView;
- (void)popScrollState;
- (void)pushScrollState;
- (void)_updatePullToRefreshProgress:(float)arg1;
- (void)_handlePullToRefresh;
- (void)_handlePullToBottom;
- (void)tableViewDidEndDecelerating;
- (void)tableViewDidEndDraggingWillDecelerate:(BOOL)arg1;
- (void)tableViewDidScroll;
- (void)tableViewWillBeginDragging;
- (void)_layoutEmptyNuxView;
- (struct CGRect)_topToastViewFrame;
- (void)_layoutToastContainerView;
- (void)_adjustPanGestureRecognizerForShowLoadingHeader;
- (void)setShowsLoadingHeader:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_invalidateTableHeaderViewSize;
- (void)_updateTableViewContentInset;
- (void)_updatePullToRefreshViewPosition;
- (void)_updateContentInsets;
- (void)layoutSubviews;
- (id)_viewForViewState:(unsigned int)arg1 requireInitialization:(BOOL)arg2;
- (void)setViewState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)configureWithTableViewDataSource:(id)arg1 tableViewDelegate:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 shouldPullToRefresh:(BOOL)arg2 nullStateViewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

