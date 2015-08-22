//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFBaseViewController.h"

#import "PSPDFPageViewDelegate.h"
#import "PSPDFScrollViewStateRestoration.h"
#import "PSPDFTransitionProtocol.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, PSPDFConfiguration, PSPDFContentScrollView, PSPDFViewState;

@interface PSPDFContinuousScrollViewController : PSPDFBaseViewController <PSPDFPageViewDelegate, PSPDFScrollViewStateRestoration, PSPDFTransitionProtocol, UIScrollViewDelegate>
{
    NSMutableDictionary *_pageSizeCacheDict;
    struct CGSize _currentCacheSize;
    struct CGRect *_currentCache;
    struct {
        unsigned int isUpdatingPagingContentSize:1;
        unsigned int isPerformingTiling:1;
        unsigned int isResizingScrollView:1;
        unsigned int updateInsetsScheduled:1;
    } _flags;
    id <PSPDFPresentationContext> _presentationContext;
    PSPDFContentScrollView *_scrollView;
    NSMutableArray *_mutableVisiblePageViews;
    NSMutableArray *_recycledPageViews;
    PSPDFViewState *_viewState;
}

@property(retain, nonatomic) PSPDFViewState *viewState; // @synthesize viewState=_viewState;
@property(readonly, nonatomic) NSMutableArray *recycledPageViews; // @synthesize recycledPageViews=_recycledPageViews;
@property(readonly, nonatomic) NSMutableArray *mutableVisiblePageViews; // @synthesize mutableVisiblePageViews=_mutableVisiblePageViews;
@property(nonatomic) __weak PSPDFContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <PSPDFPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollView:(id)arg1 didChangeFrameSizeFrom:(struct CGSize)arg2;
- (void)scrollView:(id)arg1 willChangeFrameSizeTo:(struct CGSize)arg2;
- (void)scrollViewDidFinishRestoringState:(id)arg1;
- (id)scrollView:(id)arg1 pageViewForPage:(unsigned int)arg2;
- (struct CGRect)effectiveViewPortForScrollView:(id)arg1 forcingLayout:(BOOL)arg2;
- (BOOL)isDisplayingPageForIndex:(unsigned int)arg1;
- (void)updatePageFrame:(id)arg1 forIndex:(unsigned int)arg2;
- (void)configurePage:(id)arg1 forIndex:(unsigned int)arg2;
- (void)tilePagesInScrollView:(id)arg1 forPresentationContext:(id)arg2 forced:(BOOL)arg3;
- (id)visiblePageViewsForcingLayout:(BOOL)arg1;
- (id)dequeueRecycledPage;
- (void)recyclePage:(id)arg1;
- (void)updateContentSizeOfScrollView:(id)arg1 andMatchFrameOfView:(id)arg2 forContext:(id)arg3;
- (struct CGRect)frameForViewAtIndex:(unsigned int)arg1;
- (void)invalidateCache;
- (void)updateInsetsIfNeeded;
- (void)setNeedsUpdateInsets;
- (void)applyViewState:(id)arg1;
- (id)captureCurrentViewState;
- (id)pageViewForPage:(unsigned int)arg1;
- (id)visiblePages;
- (void)setPage:(unsigned int)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (BOOL)isHorizontal;
@property(readonly, nonatomic) PSPDFConfiguration *configuration;
- (id)visiblePageViews;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPresentationContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
