//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaRequestDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGBulkMediaRequestManager : NSObject <IGMediaRequestDelegate>
{
    BOOL _wasSuccessful;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property(nonatomic) BOOL wasSuccessful; // @synthesize wasSuccessful=_wasSuccessful;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3;
- (void)checkIfFinishedWithSuccess:(BOOL)arg1;
- (void)stopObservingRequests;
- (void)trimRequests;
- (void)addRequest:(id)arg1;
- (void)bulkFetchVideoURLs:(id)arg1 priority:(int)arg2 length:(long long)arg3;
- (void)bulkFetchImageURLs:(id)arg1 priority:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)loadMediaForPosts:(id)arg1 withConfiguration:(CDStruct_de545caa)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

