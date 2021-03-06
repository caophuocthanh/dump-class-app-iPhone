//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "FBToastPresenterProviding.h"
#import "MNExpandableNavigationBarListening.h"
#import "UINavigationControllerDelegate.h"

@class FBToastPresenter, MNExpandableNavigationBar, NSString, UIBarButtonItem, UIViewController;

@interface MNNavigationController : UINavigationController <UINavigationControllerDelegate, FBToastPresenterProviding, MNExpandableNavigationBarListening>
{
    FBToastPresenter *_toastPresenter;
    MNExpandableNavigationBar *_expandableNavBar;
    float _lastExpandableNavBarMaxY;
    BOOL _animatingLayoutGuideChange;
    UIViewController *_leftBarButtonOverriddenViewController;
    BOOL _shouldDisableAutoRotation;
    UIBarButtonItem *_dismissBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *dismissBarButtonItem; // @synthesize dismissBarButtonItem=_dismissBarButtonItem;
@property(nonatomic) BOOL shouldDisableAutoRotation; // @synthesize shouldDisableAutoRotation=_shouldDisableAutoRotation;
@property(readonly, nonatomic) FBToastPresenter *toastPresenter; // @synthesize toastPresenter=_toastPresenter;
- (void).cxx_destruct;
- (void)_captureNavBarBottomFromContentBounds:(struct CGRect)arg1;
- (float)_bottomOfStatusBarInContainerView;
- (float)_bottomOfNavBarWithBoundsInContainerView:(struct CGRect)arg1;
- (float)_bottomOfNavBarContentInContainerView;
- (float)_bottomOfNavBarInContainerView;
- (id)globalToastPresenter;
- (void)expandableNavigationBar:(id)arg1 contentBoundsWillChangeTo:(struct CGRect)arg2 withAnimationDuration:(double)arg3;
- (float)adjustTopLayoutGuideLength:(float)arg1 forViewController:(id)arg2;
- (BOOL)_canDismissWithBackButton;
- (void)_didSelectDismiss;
- (void)mn_setInPopover:(BOOL)arg1;
- (id)_topViewControllerIfDismissable;
- (void)_tearDownDismissButtonItem;
- (void)_updateNavigationItemForDismissibleTopViewController;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (BOOL)isTransitioning;
- (void)_updateToastContainerVisibility;
- (void)_viewControllersDidChange;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)_displayModeBarButtonItem;
- (BOOL)_isRightViewControllerInSplitView;
- (void)_setDisplayModeButtonItemForCurrentRoot;
- (void)_restoreOverriddenBarButtonItem;
- (void)_updateDisplayModeButtonItemForRoot;
- (id)childViewControllerForStatusBarStyle;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)_logNavigationViewDidAppear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_adjustNavigationBarIfNeeded;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

