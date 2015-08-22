//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView, ZREmbeddedInterstitialViewController;

@interface ZREmbeddedInterstitialCoordinator : UIViewController
{
    id <ZRGatedViewControllerProvider> _delegate;
    ZREmbeddedInterstitialViewController *_interstitialViewController;
    UIViewController *_internalGatedViewController;
}

@property(retain, nonatomic) UIViewController *internalGatedViewController; // @synthesize internalGatedViewController=_internalGatedViewController;
@property(readonly, retain, nonatomic) ZREmbeddedInterstitialViewController *interstitialViewController; // @synthesize interstitialViewController=_interstitialViewController;
- (id)gatedViewController;
- (BOOL)isGatedViewControllerLoaded;
- (void)showInterstitialView:(BOOL)arg1;
- (void)showGatedView:(BOOL)arg1;
@property(readonly, nonatomic) UIViewController *activeViewController;
@property(readonly, nonatomic) UIView *activeView;
- (void)loadView;
- (void)dealloc;
- (id)initWithInterstitialViewController:(id)arg1 delegate:(id)arg2;

@end
