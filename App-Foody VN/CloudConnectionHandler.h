//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class CloudRequest, NSMutableData, NSString;

@interface CloudConnectionHandler : NSObject <NSURLConnectionDelegate>
{
    NSMutableData *receivedData;
    BOOL finishConnection;
    CloudRequest *currentRequest;
    id <CloudResponseProtocol> responseDelegate;
    BOOL responseReceiveBegin;
}

@property(nonatomic) BOOL responseReceiveBegin; // @synthesize responseReceiveBegin;
@property(retain, nonatomic) id <CloudResponseProtocol> responseDelegate; // @synthesize responseDelegate;
@property(nonatomic) BOOL finishConnection; // @synthesize finishConnection;
@property(retain, nonatomic) CloudRequest *currentRequest; // @synthesize currentRequest;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

