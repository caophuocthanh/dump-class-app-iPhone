//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKGraphErrorRecoveryProcessorDelegate.h"
#import "FBSDKURLConnectionDelegate.h"

@class FBSDKGraphErrorRecoveryProcessor, FBSDKGraphRequestMetadata, FBSDKLogger, FBSDKURLConnection, NSHTTPURLResponse, NSMutableArray, NSOperationQueue, NSString;

@interface FBSDKGraphRequestConnection : NSObject <FBSDKURLConnectionDelegate, FBSDKGraphErrorRecoveryProcessorDelegate>
{
    NSString *_overrideVersionPart;
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;
    FBSDKGraphErrorRecoveryProcessor *_errorRecoveryProcessor;
    unsigned int _expectingResults;
    NSOperationQueue *_delegateQueue;
    id <FBSDKGraphRequestConnectionDelegate> _delegate;
    NSHTTPURLResponse *_URLResponse;
    FBSDKURLConnection *_connection;
    NSMutableArray *_requests;
    unsigned int _state;
    FBSDKLogger *_logger;
    unsigned long _requestStartTime;
    double _timeout;
}

+ (id)userAgent;
@property(nonatomic) unsigned long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) FBSDKLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) FBSDKURLConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) id <FBSDKGraphRequestConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)processorDidAttemptRecovery:(id)arg1 didRecover:(BOOL)arg2 error:(id)arg3;
- (void)facebookURLConnection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)registerTokenToOmitFromLog:(id)arg1;
- (id)accessTokenWithRequest:(id)arg1;
- (void)logRequest:(id)arg1 bodyLength:(unsigned int)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4;
- (id)errorWithCode:(int)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;
- (id)errorFromResult:(id)arg1;
- (void)processResultDebugDictionary:(id)arg1;
- (void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3;
- (void)completeWithResults:(id)arg1 networkError:(id)arg2;
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(int)arg3;
- (void)completeFBSDKURLConnectionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3;
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(BOOL)arg2;
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4;
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(BOOL)arg3 logger:(id)arg4;
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)overrideVersionPartWith:(id)arg1;
- (void)cancel;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchEntryName:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

