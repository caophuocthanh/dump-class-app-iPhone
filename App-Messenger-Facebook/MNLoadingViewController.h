//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"

@class MNLoadingView, NSString;

@interface MNLoadingViewController : UIViewController <FBClassProvidable>
{
    MNLoadingView *_loadingView;
    BOOL _isAnimating;
    id <MNLoadingViewControllerObserver> _observer;
}

@property(nonatomic) __weak id <MNLoadingViewControllerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (BOOL)analyticsRequiresNetworkContent;
- (BOOL)analyticsHasCachedNetworkContent;
- (id)analyticsContentEventExtra;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
