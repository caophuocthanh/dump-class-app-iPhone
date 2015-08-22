//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBModalWebFlowDelegate.h"
#import "FBPaymentsPeerToPeerRiskViewControllerDelegate.h"
#import "FBWebViewControllerDelegate.h"

@class FBPaymentsPeerToPeerFeatureGatingController, FBPaymentsPeerToPeerRiskStateMap, FBUserSession, NSString, UINavigationController;

@interface FBPaymentsPeerToPeerRiskVerificationController : NSObject <FBModalWebFlowDelegate, FBWebViewControllerDelegate, FBPaymentsPeerToPeerRiskViewControllerDelegate>
{
    FBPaymentsPeerToPeerRiskStateMap *_riskStateMap;
    id <MNNavigationPluginService> _navigationPluginService;
    FBUserSession *_session;
    NSString *_transferFBID;
    unsigned int _transferFlags;
    UINavigationController *_navigationController;
    int _currentStep;
    BOOL _isHelperWebOpen;
    CDUnknownBlockType _cancellationBlock;
    CDUnknownBlockType _completionBlock;
    FBPaymentsPeerToPeerFeatureGatingController *_featureGatingController;
}

- (void).cxx_destruct;
- (void)_logEvent:(int)arg1;
- (void)_handleRequestError:(id)arg1;
- (void)_showViewController:(id)arg1 verificationStep:(int)arg2;
- (void)_showWebViewControllerForURL:(id)arg1 isWebHelper:(BOOL)arg2;
- (id)_createViewController:(int)arg1 withScreenData:(id)arg2;
- (void)_handleRequestResponse:(id)arg1;
- (void)_sendRequestFromStep:(id)arg1 transferID:(id)arg2 userInput:(id)arg3;
- (void)_cleanup;
- (void)_performCancel;
- (void)_handleCanceledValidation;
- (void)_handleRiskState:(int)arg1;
- (BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(int)arg3;
- (void)webViewControllerDidComplete:(id)arg1;
- (void)webViewControllerDidCancel:(id)arg1;
- (void)didTapOnNext:(id)arg1 fromStep:(int)arg2 userInput:(id)arg3;
- (void)didTapOnLearnMore:(id)arg1;
- (void)didCompleteVerification:(id)arg1;
- (void)didCancelVerification:(id)arg1;
- (void)handleRiskVerificationForTransferWithFBID:(id)arg1 andFlags:(unsigned int)arg2 cancellationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithRiskStateMap:(id)arg1 featureGatingController:(id)arg2 navigationPluginService:(id)arg3 session:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
