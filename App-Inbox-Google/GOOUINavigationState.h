//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOUINavigationStateDelegate.h"
#import "NSCopying.h"

@class GOOUIViewControllerWrapper, NSArray, NSMutableDictionary, NSString, UIView;

@interface GOOUINavigationState : NSObject <NSCopying, GOOUINavigationStateDelegate>
{
    UIView *_containerView;
    NSMutableDictionary *_overlayViews;
    BOOL _headerViewHidden;
    BOOL _footerViewHidden;
    GOOUIViewControllerWrapper *_initiatingControllerWrapper;
    GOOUIViewControllerWrapper *_viewControllerWrapper;
    GOOUIViewControllerWrapper *_headerControllerWrapper;
    GOOUIViewControllerWrapper *_footerControllerWrapper;
    int _interfaceOrientation;
}

@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic, getter=isFooterViewHidden) BOOL footerViewHidden; // @synthesize footerViewHidden=_footerViewHidden;
@property(readonly, nonatomic, getter=isHeaderViewHidden) BOOL headerViewHidden; // @synthesize headerViewHidden=_headerViewHidden;
@property(retain, nonatomic) GOOUIViewControllerWrapper *footerControllerWrapper; // @synthesize footerControllerWrapper=_footerControllerWrapper;
@property(retain, nonatomic) GOOUIViewControllerWrapper *headerControllerWrapper; // @synthesize headerControllerWrapper=_headerControllerWrapper;
@property(retain, nonatomic) GOOUIViewControllerWrapper *viewControllerWrapper; // @synthesize viewControllerWrapper=_viewControllerWrapper;
@property(retain, nonatomic) GOOUIViewControllerWrapper *initiatingControllerWrapper; // @synthesize initiatingControllerWrapper=_initiatingControllerWrapper;
- (void).cxx_destruct;
- (void)updateOverlayViewFramesWithViewFrame:(struct CGRect)arg1;
- (id)keyForOverlayView:(id)arg1;
- (BOOL)shouldCrossFadeFooterDuringOrientationChange;
- (BOOL)shouldCrossFadeHeaderDuringOrientationChange;
- (void)adjustFooterFrameForOrientation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (struct CGRect)frameForOffscreenFooterView;
- (BOOL)statusBarIsOpaque;
- (struct CGRect)frameForOffscreenHeaderView;
- (struct CGRect)frameForFooterView;
- (struct CGRect)frameForHeaderView;
- (struct CGRect)frameForHeaderViewWithStatusBarHeight:(float)arg1;
- (struct CGRect)frameForOffscreenView;
- (struct CGRect)frameForView;
- (struct CGRect)frameForViewWithStatusBarHeight:(float)arg1;
- (float)statusBarHeightFromHeight:(float)arg1;
- (struct CGRect)maxViewport;
- (struct CGRect)viewport;
- (struct CGRect)containerBounds;
- (void)statusBarFrameWillChangeToHeight:(float)arg1;
- (struct CGRect)footerViewFrameForStatusBarFrameChangeToHeight:(float)arg1;
- (int)statusBarStyle;
- (void)statusBarStyleDidChange;
- (void)viewportDidChangeAnimated:(BOOL)arg1 toViewport:(struct CGRect)arg2;
- (void)animateViewportToViewport:(struct CGRect)arg1;
- (void)viewportWillChangeAnimated:(BOOL)arg1 toViewport:(struct CGRect)arg2;
- (void)viewportDidChangeAnimated:(BOOL)arg1 fromViewport:(struct CGRect)arg2 toViewport:(struct CGRect)arg3;
- (void)animateViewportFromViewport:(struct CGRect)arg1 toViewport:(struct CGRect)arg2;
- (void)viewportWillChangeAnimated:(BOOL)arg1 fromViewport:(struct CGRect)arg2 toViewport:(struct CGRect)arg3;
- (void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hintFooterViewHidden:(BOOL)arg1;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hintHeaderViewHidden:(BOOL)arg1;
- (void)updateOverlayViewFrames;
@property(readonly, nonatomic) NSArray *overlayViews;
- (void)removeOverlayView:(id)arg1;
- (void)preserveOverlayViewsFromPreviousState:(id)arg1;
- (void)addOverlayView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;
- (id)footerView;
- (id)headerView;
- (id)view;
- (void)loadViews;
- (Class)transitionClass;
- (int)transitionTypeForFooter;
- (int)transitionTypeForHeader;
- (int)transitionTypeForView;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

