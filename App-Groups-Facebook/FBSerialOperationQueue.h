//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAsynchronousOperation, FBKVOController, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FBSerialOperationQueue : NSObject
{
    FBKVOController *_KVOContoller;
    NSMutableArray *_operations;
    FBAsynchronousOperation *_runningTask;
    NSObject<OS_dispatch_queue> *_accessControlQueue;
    BOOL _empty;
    BOOL _suspended;
}

@property BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) BOOL empty; // @synthesize empty=_empty;
- (void).cxx_destruct;
- (void)_checkAndSignalEmpty;
- (void)cancelAllOperations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_checkAndRun;
- (void)resume;
- (void)suspend;
- (void)addOperation:(id)arg1;
- (unsigned int)operationCount;
- (id)init;

@end

