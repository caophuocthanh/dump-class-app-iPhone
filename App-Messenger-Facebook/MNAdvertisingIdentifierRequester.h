//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"
#import "FBSessionClassProvidable.h"

@class FBAnalytics, FBSimpleNetworkerRequest, FBUserSession, NSString;

@interface MNAdvertisingIdentifierRequester : NSObject <FBNetworkerRequestDelegate, FBSessionClassProvidable>
{
    FBUserSession *_session;
    FBSimpleNetworkerRequest *_request;
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)issueRequestIfNecessary;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1 analytics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

