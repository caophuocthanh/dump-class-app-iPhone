//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AFTutorialViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    BOOL _shouldHideStatusBar;
    UIView *_contentView;
    int _autoDismissStyle;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) BOOL shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(nonatomic) int autoDismissStyle; // @synthesize autoDismissStyle=_autoDismissStyle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)longPressRecognized:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
