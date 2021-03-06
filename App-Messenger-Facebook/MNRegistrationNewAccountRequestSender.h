//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMReachabilityAwareNetworkerDelegate.h"

@class FBMReachabilityAwareNetworker, FBMRestNetworkerRequest, NSString;

@interface MNRegistrationNewAccountRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate>
{
    FBMRestNetworkerRequest *_restNetworkRequest;
    FBMReachabilityAwareNetworker *_reachabilityAwareNetworker;
    id <MNRegistrationNewAccountRequestSenderDelegate> _delegate;
}

+ (id)requestParametersWithPhoneNumber:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;
@property(nonatomic) __weak id <MNRegistrationNewAccountRequestSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2;
- (void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

