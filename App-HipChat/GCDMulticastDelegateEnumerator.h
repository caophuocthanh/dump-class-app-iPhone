//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@interface GCDMulticastDelegateEnumerator : NSObject
{
    unsigned int numNodes;
    unsigned int currentNodeIndex;
    NSArray *delegateNodes;
    NSObject<OS_dispatch_queue> *delegateListModificationQueue;
}

- (void).cxx_destruct;
- (BOOL)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2 forSelector:(SEL)arg3;
- (BOOL)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2 ofClass:(Class)arg3;
- (BOOL)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (unsigned int)countForSelector:(SEL)arg1;
- (unsigned int)countOfClass:(Class)arg1;
- (unsigned int)count;
- (id)initFromDelegateNodes:(id)arg1;

@end

