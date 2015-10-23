//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface ACTPingRetryQueue : NSObject
{
    unsigned int _maxPingsPerBatch;
    NSMutableArray *_pingerQueue;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *pingerQueue; // @synthesize pingerQueue=_pingerQueue;
@property(nonatomic) unsigned int maxPingsPerBatch; // @synthesize maxPingsPerBatch=_maxPingsPerBatch;
- (void).cxx_destruct;
- (id)pingerStore;
- (void)retry;
- (void)addPingersFromSet:(id)arg1;
- (void)addPinger:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) unsigned int maxEntries;
- (id)init;

@end
