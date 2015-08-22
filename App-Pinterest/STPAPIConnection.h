//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface STPAPIConnection : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    BOOL _started;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    NSURLResponse *_receivedResponse;
    NSError *_overrideError;
    CDUnknownBlockType _completionBlock;
}

+ (id)blacklistedCertificateError;
+ (id)SHA1FingerprintOfData:(id)arg1;
+ (id)SHA1FingerprintOfCertificateData:(struct __SecCertificate *)arg1;
+ (BOOL)isCertificateBlacklisted:(struct __SecCertificate *)arg1;
+ (id)certificateBlacklist;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *overrideError; // @synthesize overrideError=_overrideError;
@property(retain, nonatomic) NSURLResponse *receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) BOOL started; // @synthesize started=_started;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)runOnOperationQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
