//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString, RCTBridge, RCTRootContentView, UIViewController;

@interface RCTRootView : UIView
{
    RCTBridge *_bridge;
    NSString *_moduleName;
    NSDictionary *_launchOptions;
    RCTRootContentView *_contentView;
    NSDictionary *_initialProperties;
    Class _executorClass;
    UIViewController *_backingViewController;
    UIView *_loadingView;
    double _loadingViewFadeDelay;
    double _loadingViewFadeDuration;
}

@property(nonatomic) double loadingViewFadeDuration; // @synthesize loadingViewFadeDuration=_loadingViewFadeDuration;
@property(nonatomic) double loadingViewFadeDelay; // @synthesize loadingViewFadeDelay=_loadingViewFadeDelay;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIViewController *backingViewController; // @synthesize backingViewController=_backingViewController;
@property(retain, nonatomic) Class executorClass; // @synthesize executorClass=_executorClass;
@property(copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(readonly, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contentViewInvalidated;
- (id)reactTag;
- (void)layoutSubviews;
- (void)bundleFinishedLoading:(id)arg1;
- (void)javaScriptDidLoad:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (BOOL)canBecomeFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 launchOptions:(id)arg3;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2;

@end

