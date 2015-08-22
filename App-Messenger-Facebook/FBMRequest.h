//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBURLProtocolUploadDelegate.h"

@class FBMURLRequestFormatter, FBMURLRequestFormatterParams, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLConnection;

@interface FBMRequest : NSObject <FBURLProtocolUploadDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBMURLRequestFormatter *_urlRequestFormatter;
    FBMURLRequestFormatterParams *_urlRequestFormatterParams;
    id <FBRequestDelegate> _delegate;
    NSURLConnection *_connection;
    NSMutableData *_responseText;
    NSString *_userAgent;
    BOOL _hasHTTPStatusCode;
    int _httpStatusCode;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    long long _bytesDown;
    long long _expectedBytesDownOnWire;
    BOOL _gotContentLength;
    long long _bytesUp;
    BOOL _shouldTrack;
    NSURL *_requestURL;
}

+ (id)clearURLsFromError:(id)arg1;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) NSMutableData *responseText; // @synthesize responseText=_responseText;
@property(nonatomic) __weak id <FBRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cleanupConnectionAsync;
- (void)_cleanupResponseAndConnection;
- (BOOL)connectionFailedWithHTTPStatusCode:(int)arg1 error:(id *)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)URLProtocol:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)dealloc;
- (id)sendSynchronousRequestWithError:(id *)arg1;
- (void)cancel;
- (void)untrack;
- (void)_sendRequest;
- (void)connect;
- (void)handleResponseData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)failWithError:(id)arg1;
- (void)_requestDidSucceed;
- (void)_didFinishRequest;
- (id)parseJsonResponse:(id)arg1 error:(id *)arg2;
- (void)extractLocalizedErrorMessaging:(id *)arg1;
- (id)formError:(int)arg1 userInfo:(id)arg2;
- (id)initWithURLRequestFormatter:(id)arg1 params:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
