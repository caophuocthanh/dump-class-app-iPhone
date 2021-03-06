//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUpdateFQLDataFetcher.h"

#import "FBNetworkerRequestDelegate.h"

@class FBNetworkerRequest, FBUserSession, NSString;

@interface FBUpdateDataFetcherWithSession : FBUpdateFQLDataFetcher <FBNetworkerRequestDelegate>
{
    unsigned int _status;
    FBUserSession *_session;
    FBNetworkerRequest *_downloadRequest;
}

@property(retain, nonatomic) FBNetworkerRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)cancel;
- (void)fetchData;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

