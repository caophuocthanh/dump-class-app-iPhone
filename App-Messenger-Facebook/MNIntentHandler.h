//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFallbackIntentHandlerDelegate.h"
#import "FBIntentHandler.h"
#import "FBModalWebFlowDelegate.h"
#import "FBSessionClassProvidable.h"
#import "FBZeroRatingFenceNavigationDelegate.h"

@class FBFallbackIntentHandler, FBUserSession, MNNavigationCoordinator, MNPaymentsIntentHandler, NSString, ZRTariffedUrlBoundary, ZRTariffedUxSessionManager;

@interface MNIntentHandler : NSObject <FBFallbackIntentHandlerDelegate, FBZeroRatingFenceNavigationDelegate, FBModalWebFlowDelegate, FBIntentHandler, FBSessionClassProvidable>
{
    FBFallbackIntentHandler *_fallbackHandler;
    MNPaymentsIntentHandler *_paymentsHandler;
    MNNavigationCoordinator *_navigationCoordinator;
    FBUserSession *_userSession;
    ZRTariffedUrlBoundary *_zrURLBoundary;
    ZRTariffedUxSessionManager *_zrSessionManager;
}

- (void).cxx_destruct;
- (void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2;
- (void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2;
- (id)_zeroRatingSentryWithSessionName:(id)arg1 forExternalURL:(id)arg2;
- (id)_zeroRatingSentryForZeroRatedURL;
- (void)_sendLinkshimLogRequestIfNecessaryForURL:(id)arg1;
- (void)_configureAppLinksForWebViewController:(id)arg1 withURL:(id)arg2;
- (void)webViewControllerDidCancel:(id)arg1;
- (id)_webViewControllerForURL:(id)arg1 modal:(BOOL)arg2;
- (void)_openWebViewForURL:(id)arg1;
- (BOOL)_openURLIntent:(id)arg1;
- (BOOL)_openWebViewIntent:(id)arg1;
- (BOOL)fallbackIntentHandler:(id)arg1 openWebURL:(id)arg2;
- (void)handleIntent:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
