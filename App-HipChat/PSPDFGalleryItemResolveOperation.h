//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLSessionDataDelegate.h"

@class NSError, NSString, NSURLResponse, NSURLSession, NSURLSessionDataTask, PSPDFGalleryItem;

@interface PSPDFGalleryItemResolveOperation : NSOperation <NSURLSessionDataDelegate>
{
    BOOL _finished;
    BOOL _executing;
    BOOL _started;
    PSPDFGalleryItem *_item;
    CDUnknownBlockType _resolveCompletionBlock;
    PSPDFGalleryItem *_resolvedItem;
    NSError *_error;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSURLResponse *_response;
    double _timeoutIntervalForRequest;
}

@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PSPDFGalleryItem *resolvedItem; // @synthesize resolvedItem=_resolvedItem;
@property(copy, nonatomic) CDUnknownBlockType resolveCompletionBlock; // @synthesize resolveCompletionBlock=_resolveCompletionBlock;
@property(readonly, nonatomic) PSPDFGalleryItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (Class)guessItemClassFromHTTPContentType:(id)arg1;
- (Class)guessItemClassFromResolvedContentURL:(id)arg1;
- (Class)guessItemClassFromResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)isExecuting;
- (void)setExecuting:(BOOL)arg1;
- (void)start;
- (BOOL)isAsynchronous;
- (void)finish;
- (void)startWithRequest:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

