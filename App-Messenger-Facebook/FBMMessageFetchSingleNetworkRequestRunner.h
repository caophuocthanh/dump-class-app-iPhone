//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMBatchThreadNetworkFetchRunningListener.h"

@class FBMBatchThreadNetworkFetchRunnerFactory, MNMessageHistoryQuery, NSString;

@interface FBMMessageFetchSingleNetworkRequestRunner : NSObject <FBMBatchThreadNetworkFetchRunningListener>
{
    FBMBatchThreadNetworkFetchRunnerFactory *_factory;
    MNMessageHistoryQuery *_query;
    BOOL _isForegroundRequest;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    id <FBMBatchThreadNetworkFetchRunning> _runner;
}

- (void).cxx_destruct;
- (void)threadFetchRunner:(id)arg1 didFailFetchForThreadDescriptors:(id)arg2 withError:(id)arg3;
- (void)threadFetchRunner:(id)arg1 didFetchThreads:(id)arg2 andEncounteredErrors:(id)arg3;
- (void)run;
- (id)initWithNetworkFetchRunnerFactory:(id)arg1 query:(id)arg2 isForegroundRequest:(BOOL)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
