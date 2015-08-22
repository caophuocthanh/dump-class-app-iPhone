//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRegistrationFlowController, IGResetPasswordViewController, NSDictionary, UINavigationController;

@protocol IGRegistrationFlowControllerDelegate <NSObject>
- (void)flowController:(IGRegistrationFlowController *)arg1 shouldRegisterWithFacebookInformation:(NSDictionary *)arg2;
- (void)flowController:(IGRegistrationFlowController *)arg1 willPresentNavigationController:(UINavigationController *)arg2;
- (void)flowController:(IGRegistrationFlowController *)arg1 didFinishRegistrationWithLoggedInDict:(NSDictionary *)arg2;
- (void)flowController:(IGRegistrationFlowController *)arg1 willResetPasswordWithViewController:(IGResetPasswordViewController *)arg2;
- (void)flowController:(IGRegistrationFlowController *)arg1 continueRegistrationToStep:(id <IGRegistrationStepObject>)arg2 inboundAnimation:(int)arg3 outboundAnimation:(int)arg4;
@end

