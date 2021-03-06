//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageFetchRequestListening.h"
#import "MNMessageStoreRequestHandling.h"

@class MNAsyncOperationTracker, MNMessageFetchRequestListenerFactory, NSObject<OS_dispatch_queue>, NSString;

@interface MNMessageStoreRequestCoordinator : NSObject <MNMessageFetchRequestListening, MNMessageStoreRequestHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <MNMessageFetchRequestRunning> _requestRunner;
    MNAsyncOperationTracker *_asyncOperationTracker;
    MNMessageFetchRequestListenerFactory *_listenerFactory;
}

- (void).cxx_destruct;
- (void)messageFetchRequest:(long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3;
- (void)messageFetchRequest:(long long)arg1 didFailWithError:(id)arg2;
- (void)messageFetchRequest:(long long)arg1 didSucceedWithResult:(id)arg2;
- (void)cancelRequest:(long long)arg1;
- (long long)handleMessageFetchRequest:(id)arg1;
- (id)initWithRequestRunner:(id)arg1 listenerFactory:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

