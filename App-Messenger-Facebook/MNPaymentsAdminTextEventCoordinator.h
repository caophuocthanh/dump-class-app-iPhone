//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPaymentsPeerToPeerNavigationCoordinator, FBUserSession;

@interface MNPaymentsAdminTextEventCoordinator : NSObject
{
    FBUserSession *_session;
    FBPaymentsPeerToPeerNavigationCoordinator *_navigationCoordinator;
}

- (void).cxx_destruct;
- (void)handlePaymentAdminTextWithMessage:(id)arg1;
- (id)initWithSession:(id)arg1 peerToPeerNavigationCoordinator:(id)arg2;

@end

