//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNAsyncOperationTracker;

@interface MNWatchThreadViewModelGenerationRequestTracker : NSObject
{
    MNAsyncOperationTracker *_asyncOperationTracker;
}

- (void).cxx_destruct;
- (long long)messageListRequestForRequest:(long long)arg1;
- (void)setMessageListRequestForRequest:(long long)arg1 forRequest:(long long)arg2;
- (long long)userStoreRequestForRequest:(long long)arg1;
- (void)setUserStoreRequest:(long long)arg1 forRequest:(long long)arg2;
- (long long)threadStoreRequestForRequest:(long long)arg1;
- (void)setThreadRequest:(long long)arg1 forRequest:(long long)arg2;
- (void)clearRequest:(long long)arg1;
- (long long)beginTrackingNewRequest;
- (id)init;

@end
