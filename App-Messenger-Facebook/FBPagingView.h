//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class FBAnimationPerformanceLogger, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;

@interface FBPagingView : UIView <UIScrollViewDelegate>
{
    NSMutableDictionary *_displayedViews;
    int _mode;
    struct UIEdgeInsets _inset;
    BOOL _needsReload;
    unsigned int _numberOfPages;
    unsigned int _startPageIndex;
    struct {
        unsigned int pagingViewDelegateRespondsToShouldRecycle:1;
        unsigned int pagingViewDelegateRespondsToDidEndDisplayingView:1;
        unsigned int pagingViewDelegateRespondsToDidFinishReloadData:1;
        unsigned int pagingViewDelegateRespondsToStartScrollNextIndex:1;
        unsigned int pagingViewDelegateRespondsToEndScroll:1;
        unsigned int pagingViewDelegateRespondsToDidScroll:1;
        unsigned int pagingViewDelegateRespondsToDidChangePageIndex:1;
        unsigned int pagingViewDelegateRespondsToDidEndScrollingAnimation:1;
        unsigned int pagingViewDelegateRespondsToWillLayout:1;
        unsigned int pagingViewDelegateRespondsToDidLayout:1;
        unsigned int pagingViewDelegateRespondsToDisposeViewData:1;
        unsigned int inLayout:1;
    } _flags;
    NSMutableArray *_recycledViews;
    FBAnimationPerformanceLogger *_animationPerformanceTracker;
    unsigned int _tileCount;
    unsigned int _currentPageIndex;
    id <FBPagingViewDataSource> _dataSource;
    id <FBPagingViewInfiniteDataSource> _infiniteDataSource;
    id <FBPagingViewDelegate> _delegate;
    float _pageGapSize;
    float _adjacentPagePadding;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) float adjacentPagePadding; // @synthesize adjacentPagePadding=_adjacentPagePadding;
@property(nonatomic) float pageGapSize; // @synthesize pageGapSize=_pageGapSize;
@property(nonatomic) __weak id <FBPagingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBPagingViewInfiniteDataSource> infiniteDataSource; // @synthesize infiniteDataSource=_infiniteDataSource;
@property(nonatomic) __weak id <FBPagingViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) unsigned int tileCount; // @synthesize tileCount=_tileCount;
- (void).cxx_destruct;
- (void)_clearViewsAndDisposeData:(BOOL)arg1;
- (unsigned int)_oneSideTileCount;
- (void)_shiftPagesByDelta:(int)arg1;
- (void)_shiftPagesInInfiniteScroll;
- (void)_updateVisiblePages;
- (void)_updateContentOffset:(float)arg1;
- (void)_updateContentSize;
- (id)_addView:(id)arg1 atIndex:(int)arg2;
- (id)_addPageAtIndex:(int)arg1;
- (void)_recycleView:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_addPagesForIndices:(id)arg1;
- (void)_performReloadDataInfiniteMode;
- (void)_performReloadDataFiniteMode;
- (void)_performReloadData;
- (void)_updateFb_coveringSplitViewControllerShouldNotModifyScrollsToTopForAllPages;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) __weak UIView *currentPageView;
- (id)displayedViews;
- (void)setClipsToBounds:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCurrentPageIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)startAnimationPerformanceTracker:(id)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)clearDataAndViews;
- (void)reloadData;
- (id)dequeueReusableView;
- (void)animateBackgroundColorWithStartingColor:(id)arg1 endColor:(id)arg2 duration:(float)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2 withInset:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
